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
int n;
cin>>n;
int k;
cin>>k;
int sum=k*4;
int x1,x2,y1,y2;
cin>>x1>>x2;
for(int i=1;i<n;i++){
    cin>>x2>>y2;
    sum+=x2*2;
    sum+=y2*2;
}
cout<<sum<<endl;
}  
    return 0;
}
