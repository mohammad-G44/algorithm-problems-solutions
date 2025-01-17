#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        string s, t;
        cin >> s >> t;

        int lcp = 0; // Longest Common Prefix
        int n = s.length();
        int m = t.length();

        for (int i = 1; i <= min(n, m); i++) {
            if (s.substr(0, i) == t.substr(0, i)) {
                lcp = i;
            } else {
                break; // No need to check further if the prefixes mismatch
            }
        }

        cout << (n + m - max(lcp, 1) + 1) << endl;
    }
    return 0;
}
