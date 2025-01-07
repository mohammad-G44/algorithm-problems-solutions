#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

 
int main() {
   
     int t;
     cin>>t;
     while(t--){
        long long n;
       cin>>n;
     string s;
     cin>>s;
     long long sum=0;
     for(long long i=0;i<s.length();i++){
        if(s[i]=='m'&& i<s.length()-2){
            if(s[i+1]=='a'&& s[i+2]=='p'){
            sum++;
            s[i+2]='d';}
        }
        if(s[i]=='p'&& i<s.length()-2){
            if(s[i+1]=='i'&& s[i+2]=='e')
            sum++;
        }
     }cout<<sum<<endl;
       }
      
    return 0;
}
