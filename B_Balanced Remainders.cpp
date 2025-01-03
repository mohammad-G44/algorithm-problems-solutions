#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
 
int main(){
int q;
cin>>q;
while(q--){
   ll n;
   cin>>n;
  int c4=n/3;
  int a,c0=0,c1=0,c2=0;
 for(int i=0;i<n;i++){
cin>>a;
if(a%3==0)c0++;
if(a%3==1)c1++;
if(a%3==2)c2++;
 }
ll sum=0;
 
 while(c0!=c4 || c1!=c4 || c2!=c4){
   if(c0>c4){
      c0--;
      c1++;
      sum+=1;
   }
   else if(c1>c4){
      c1--;
      c2++;
      sum+=1;
   }
   else if(c2>c4){
      c2--;
      c0++;
      sum+=1;
   }
 }
 
  cout<<sum<<endl;
}
return 0;
 
} 
