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
    if(n%4==0)cout<<n/4<<endl;
    else cout<<(n-2)/4 +1<<endl;
     }  
    return 0;
}
