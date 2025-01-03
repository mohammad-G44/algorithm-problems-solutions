#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void fun(int l,int r,int d,vector<int>&p,vector<int>&k){
  int maxi=0;
  int postion=0;
  if (l > r || l<0) return;
  
  for(int i=l;i<=r;i++){
   
    if(maxi<p[i]){postion=i;
    maxi=p[i];
    }
  }
k[postion]=d;
fun(l,postion-1,d+1,p,k);
fun(postion+1,r,d+1,p,k);
}

int main(){

ll n;
int t;
cin>>t;
while(t--){
  cin>>n;
  vector<int> p(n),k(n);
  for(int i=0;i<n;i++){
cin>>p[i];
  }
 
  fun(0,n-1,0,p,k);
  for(int i=0;i<n;i++){
    cout<<k[i]<<" ";
  }
  cout<<" "<<endl;
}return 0;}
