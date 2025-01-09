#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

 const int P = 1e9 + 7;

int main() {
   
     int t;
     cin>>t;
     while(t--){
        long long n;
 
 cin>>n;
 string s;
 cin>>s;
 int sum=0;
 bool found =false;
 for(int i=0;i<n;i++){
   if(i<n-2 && s[i]=='.'&& s[i+1]=='.' && s[i+2]=='.'){
      found =true;
      break;
   }
   else if(s[i]=='.') sum++;
 }


 if(found)
 cout<<2<<endl;
 else cout<<sum<<endl;
     }
    return 0;
}
