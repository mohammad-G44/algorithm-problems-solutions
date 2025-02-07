#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  vector<int>a(t);
for(auto &x:a)cin>>x;
sort(a.begin(),a.end());
for(auto &x:a)cout<<x<<" ";
cout<<endl;
  return 0;
}
