#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
int q;
cin>>q;
while(q--){
   ll n;
   cin>>n;
  
  int solution=0;
  vector<ll> a(n),b(n-1);
  for(int i=0;i<n;i++){
 cin>>a[i];

  }
  ll maxi=max(a[0],a[1]);
  ll mini=maxi;
  
 for(int i=0;i<n-1;i++){
 maxi=max(a[i],a[i+1]);
 b[i]=maxi;
 mini=min(mini,maxi);
 } 

 cout<<mini-1<<endl;

 
  
}
return 0;

} 
