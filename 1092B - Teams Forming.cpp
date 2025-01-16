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
   vector<int> a(t);
   for(auto& i:a)cin>>i;
   sort(a.begin(),a.end());
   int bruh=0;
   for(int i=0;i<t;i+=2){
    bruh+=a[i+1]-a[i];
   }
 
    cout<<bruh<<endl;
    
    return 0;
}
