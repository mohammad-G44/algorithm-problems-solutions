#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   
        int n;
        cin >> n;
        vector<int> arr;
        vector<int> odd;
        int a;
        
        for (int i = 0; i < n; ++i) {
            cin >> a;
            if (a % 2 == 0)
                arr.push_back(i);
            else
                odd.push_back(i);
        }
 
        
        if (odd.size() == 1) {
            cout << odd[0] +1 << endl;
        } else {
            cout << arr[0] +1 << endl;
        }
    
 
    return 0;
}
