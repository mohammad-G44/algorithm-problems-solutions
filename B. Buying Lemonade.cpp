#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sol() {
    int n, m; 
    cin >> n >> m; 
    vector<long long> v(n);
    
    for (auto &x : v) cin >> x; // Read vector
    sort(v.begin(), v.end());

    long long ans = 0;
    int ct = 0;

    for (int i = 0; i < n; ++i) {
        if (ans >= m) break;
        if (i > 0 && v[i] == v[i - 1]) continue;

        ans += (n - i) * (v[i] - (i > 0 ? v[i - 1] : 0));
        ct = i;
    }
    cout << m + ct << endl;
}

int main() {
    int tc; 
    cin >> tc;
    while (tc--) sol();
    return 0;
}
