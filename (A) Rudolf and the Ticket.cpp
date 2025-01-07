#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

 
int main() {
   
     int t;
     cin>>t;
     while(t--){
        long long n,m,k;
       cin>>n>>m>>k;
       vector<int>a(n),b(m);
       for(int i=0;i<n;i++)cin>>a[i];
       for(int i=0;i<m;i++)cin>>b[i];
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
long long sum=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]+b[j]<=k){
                sum++;
            }else break;
        }
       }
       cout<<sum<<endl;
       }
      
    return 0;
}
