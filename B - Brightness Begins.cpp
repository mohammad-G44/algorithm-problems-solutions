#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) << "\n";
    }
    return 0;
}
