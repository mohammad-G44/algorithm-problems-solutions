
#include <bits/stdc++.h>
using namespace std;

 
int n, k, cur, ans=0;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> k;
	while(n--){
		int x;
		cin >> x;
		cur += x;
		int r = min(8, cur);
		cur -= r;
		k -= r;
		ans++;
		if(k <= 0)
			break;
	}
	if(k > 0)
		cout << -1 << '\n';
	else
		cout << ans << '\n';
	return 0;
}
