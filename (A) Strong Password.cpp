#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
 
int main() {
   
     int t;
     cin>>t;
     while(t--){
        long long n;
        string s;

        cin>>s;
        if(s.length()==1 && s[0]!='w'){
            cout<<'w'<<s[0];
        }else if(s.length()==1 && s[0]=='w'){
            cout<<'p'<<s[0];}
        else{
            bool found=false;
            cout<<s[0];
for(int i=1;i<s.length();i++){
  
    if(s[i]==s[i-1] && !found && s[i]!='w'){
    cout<<'w'<<s[i];
    found=true;}
    else  if(s[i]==s[i-1] && !found && s[i]=='w'){
    cout<<'p'<<s[i];
    found=true;}
else cout<<s[i];
}
n=s.length();
        if(!found && s[n-1]!='w')
        cout<<'w';
        else if(!found && s[n-1]=='w')
        cout<<'p';
        }
        
        cout<<endl;
      }
    return 0;
}
