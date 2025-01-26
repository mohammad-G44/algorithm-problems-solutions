#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define v vector

void solve() {
    int n, x; cin >> n >> x;

    v<int> a(n);
    for (int& x : a) cin >> x;

    int ans = a[0];
    for (int i = 1; i < n; i++)
        ans = max(ans, a[i] - a[i - 1]);
    cout << max(ans, 2 * (x - a.back())) << nl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    cin >> T;
    while (T--) solve();
}
