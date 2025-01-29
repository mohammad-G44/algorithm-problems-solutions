#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int checkprime(int i){
    if(i<4)return i;
    if(i==5 || i==7)return i;
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            return 0;
        }
    }
    return i;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n;
       cout<<n/2<<endl;
    }
    return 0;
}
