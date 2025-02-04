#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
       set<char> c;
       string s;
       cin>>s;
       char current=s[0];
       bool sus=false;
       for(int i=0;i<n;i++){
if(c.find(s[i])==c.end()){c.insert(s[i]);current=s[i];}
else if(c.find(s[i])!=c.end() && s[i]!= current){
  sus=true;
  break;}
       }
       
       cout<<(sus?"NO":"YES")<<endl;
    }
    return 0;
}
