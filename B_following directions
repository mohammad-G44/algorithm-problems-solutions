#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {x--;}
		if (s[i] == 'R') {x++;}
		if (s[i] == 'D') {y--;}
		if (s[i] == 'U') {y++;}
		if (x == 1 && y == 1) {cout << "YES\n"; return;}
	}	
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}
