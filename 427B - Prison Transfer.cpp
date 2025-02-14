#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <vector>
#include <cstdio>
 
using namespace std;
 
vector < int > vec;
 
int main(){
    int n,t,c;
    cin >> n >> t >> c;
    vec.push_back( -1 );
    for( int i=0; i<n; i++){
        int temp;
        scanf("%d",&temp);
        if(temp>t) vec.push_back(i);
    }
    vec.push_back(n);
    long long ans=0;
    for(int i=1; i< int( vec.size() ); i++){
        int diff = vec[i] - vec[i-1]-1;
        ans+= max( diff-c+1 , 0 );
    }
    cout<<ans<<endl;
    return 0;
}
