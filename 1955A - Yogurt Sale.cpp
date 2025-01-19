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
    int c,d;
    cin>>c>>d;
    if(c*2>d){
int price= (n/2)*d +(n- 2*(n/2))*c;
cout<<price<<endl;}
else cout<< n*c<<endl; }  
    return 0;
}
