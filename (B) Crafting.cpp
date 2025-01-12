#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--){
    long long m;
    cin >> m;
    vector<long long> a(m),b(m);
    for(int i=0;i<m;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
int less=0,equal=0;
long long lessd=0,lessdd=INT_MAX;
for(int i=0;i<m;i++){
    if(a[i]<b[i]){
    less++;
lessd=max(lessd,b[i]-a[i]);
    }
    if(a[i]==b[i])
    equal++;
    if(a[i]>b[i])
    lessdd=min(lessdd,a[i]-b[i]);
}
 
if(less>1 || (less==1 && equal>0)|| (lessdd<lessd))
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
 
    
    }
    return 0;
}
