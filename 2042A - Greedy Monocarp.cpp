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
    while (t--){
    long long m,k;
    cin >> m>>k;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
        
    }
   sort(a.rbegin(),a.rend());
int sum=0;
int j=0;
while(true){
sum+=a[j];
if(sum>k){
cout<<k-(sum-a[j])<<endl;

break;}
j++;
if(j==m){
cout<<k-sum<<endl;
break;}
}
 
    
    }
    return 0;
}
