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
vector<int> a(3);

cin>>a[0]>>a[1]>>a[2];
sort(a.begin(),a.end());
cout<<a[2]-a[0]<<endl;

}  
    return 0;
}
