
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
    string n;
    cin >> n;
int sum=0;
bool zero=false,even=false;
for (char c : n){
    int i=c-'0';
     if((zero || i) && i%2==0)even=true;
    if(i==0)zero=true;
   
    sum+=i;
 

}
if((zero && sum%3==0 && even ))cout<<"red"<<endl;
else cout<<"cyan"<<endl;
 }
    return 0;
}
