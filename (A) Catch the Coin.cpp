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
      bool sus=false;
    long long x,y;
    cin>>x>>y;
    if(y>-2)sus=true;
       cout<<(sus?"YES":"NO")<<endl;
    }
    return 0;
}
