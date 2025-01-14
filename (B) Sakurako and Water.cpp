#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    map<int, int> mn;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            mn[i - j] = min(mn[i - j], a[i][j]);
        }
    }

    int ans = 0;
    for (auto& [_, value] : mn) {
        ans -= value;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}
