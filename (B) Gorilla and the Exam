#include <bits/stdc++.h>
 
using namespace std;
 
using ll= long long;
 
 
int main(){
int t;
cin>>t;
while(t--){
  ll n,k;
  cin>>n>>k;
  vector<ll> a(n);
 map<ll, ll> freqMap;
  for(int i=0;i<n;i++){
cin>>a[i];
 
  }
  for (int num : a) {
        freqMap[num]++;
    }
 
   
    vector<ll> frequencies;
    for (const auto& pair : freqMap) {
        frequencies.push_back(pair.second);
    }
 
    
    sort(frequencies.begin(), frequencies.end());
int i=0;
while(k>0 && i<frequencies.size()){
  k-=frequencies[i];
  if (k < 0) {
        break; 
    }
    i++; 
}
 
cout<<(frequencies.size()-i?frequencies.size()-i:1)<<endl;
 
 
}
 
 
    return 0;
}
