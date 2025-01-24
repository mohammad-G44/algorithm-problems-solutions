#include <bits/stdc++.h>
using namespace std;
 
int find_min_oper(int n, int k){
	if(k == 1) return n;
	int ans = 0;
	while(n){
		ans += n%k;
		n /= k;
	}
	return ans;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << find_min_oper(n,k) << "\n";
	}
    return 0;
}
