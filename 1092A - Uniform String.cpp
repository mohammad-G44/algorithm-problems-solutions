#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;
    vector<string> results;

    
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    while (t--) {
        int n, k;
        cin >> n >> k;

       
        string base_cycle = alphabet.substr(0, k);

       
        string result = "";
        while ((int)result.size() < n) {
            result += base_cycle;
        }
        result = result.substr(0, n); 

        cout << result << endl;
    }

    

    return 0;
}
