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
       cin>>n;
       vector<int>p(n);
       for(int i=0;i<n;i++){
        cin>>p[i];
       }
       int k=p[0],d=p[n-1];
       int i=0,j=n-1;
       while(true){
        
        if(p[i]!=k)
        break;
    
        i++;
        if(i==n)break;
       }
      
        while(true){
        
        if(p[j]!=d)
        break;
    
    j--;
        if(j==-1)break;
       }
       if(i==n || n==1 || j==-1)
       cout<<0<<endl;
else if(k==d){
       
       cout<<n-i-(n-j-1)<<endl;}
else {
    if(i>=n-j)
    cout<<n-i <<endl;
    else 
    cout<<j+1<<endl;
}



       }
      
    return 0;
}
