#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
    long long m,b,c,a;
    cin >> m>>a>>b>>c;
    long long sum=0;
    if(m>=a)sum+=a;
    else sum+=m;
    if(m>=b)sum+=b;
    else sum+=m;

    if(2*m>sum){
        long long temp=2*m-sum;
        if(temp>=c)sum+=c;
        else sum+=temp;
    }
    cout<<sum<<endl;
    
    }
    return 0;
}
