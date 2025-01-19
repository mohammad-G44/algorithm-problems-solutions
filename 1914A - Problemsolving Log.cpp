#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s;
        
        vector<int> freq(26, 0); 
        for (char c : s) {
            freq[c - 'A']++; 
        }
        
        int count = 0;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] >= i + 1) {
                count++; 
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
