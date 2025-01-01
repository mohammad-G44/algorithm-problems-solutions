#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
 
int main(){
int q;
cin>>q;
while(q--){
   ll n;
   cin>>n;
  vector<ll> a(n);
 for(int i=0;i<n;i++){
cin>>a[i];
 }
int solution=0;
for(int i=0;i<n-1;i++){
   double maxi =max(a[i],a[i+1]);
   double mini=min(a[i],a[i+1]);
if(maxi/mini>2.0){
   mini+=mini;
   solution++;
   while(maxi/mini>2.0){
      mini*=2;
      solution++;
   }
}
}
cout<<solution<<endl;
 
  
}
return 0;
 
} 
