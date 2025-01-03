#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPS(ll a){
   int t=round(cbrt(a));
   return t*t*t==a;
}

int main(){
int q;
cin>>q;
while(q--){
   ll n;
   cin>>n;
 bool found=false;
 for(ll i=1;i*i*i<=n;i++){
   ll b3=n-i*i*i;
   if(isPS(b3)&& b3){
      found =true;
      cout<<"YES"<<endl;
      break;
   }
 }
 if(!found){
   cout<<"NO"<<endl;
 }
}
return 0;

} 
