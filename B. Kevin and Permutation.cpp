#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   
     int t;
     cin>>t;
     while(t--){
        long long n,k;
        cin>>n>>k;
        int p=1,l=n;
        int k1=k;
        for(long long i=0;i<n;i++){
k--;
if(k==0){
    cout<<p<<" ";
    p++;
    k=k1;
}else{
    cout<<l<<" ";
l--;
}
        }
     cout<<endl;}
    return 0;
}
