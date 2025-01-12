#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const long long INF = 1e18;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1); 
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    vector<long long> dist(n + 1, INF); 
    vector<int> parent(n + 1, -1);      
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d != dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    
    if (dist[n] == INF) {
        cout << -1 << endl;
        return 0;
    }

   
    vector<int> path;
    for (int v = n; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());

    for (int v : path)
        cout << v << " ";
    cout << endl;

    return 0;
}
