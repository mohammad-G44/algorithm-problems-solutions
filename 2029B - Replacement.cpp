#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
while(t--){
    long long n;
    cin>>n;
string s,t;
cin>>s>>t;
bool tm=false;
int cont0=count(s.begin(),s.end(),'0');
int cnt1=n-cont0;
for(int i=0;i<n-1;i++){
    if(cnt1==0 || cont0==0){
        tm=true;
        cout<<"NO"<<endl;
        break;
        
    }
    if(t[i]=='1')cont0--;
    else cnt1--;
}
if(!tm)
cout<<"YES"<<endl;

   }return 0;}
    
