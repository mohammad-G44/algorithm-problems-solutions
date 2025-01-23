#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using vi = vector<int>;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define smx(a, b) a = max(a, b)
#define smn(a, b) a = min(a, b)
#define pb push_back
#define endl '\n'
 
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
 
mt19937 rng(time(0));
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
 
	int t; cin >> t;
	while (t--) {
		ll n, b, c; cin >> n >> b >> c;
		if (b == 0) {
			if (c >= n) {
				cout << n << "\n";
			} else if (c >= n - 2) {
				cout << n - 1 << "\n";
			} else {
				cout << -1 << "\n";
			}
		} else {
		    if (c >= n) cout << n << "\n";
			else cout << n - max(0ll, 1 + (n - c - 1) / b) << "\n";
		}
	}
}
