#include <iostream>
#include <vector>
#include <unordered_set>
 
using namespace std;
 
int main() {
    int NT;
    cin >> NT;
 
    // Precompute all valid square numbers
    unordered_set<int> sqs;
    int k = 1;
    while (k * k <= 100 * 1000) {
        sqs.insert(k * k);
        k += 2; // Increment by 2 to account for odd layers only
    }
 
    for (int T = 0; T < NT; ++T) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int answer = 0;
        int cursum = 0;
        for (int t : a) {
            cursum += t;
            if (sqs.find(cursum) != sqs.end()) {
                ++answer;
            }
        }
        cout << answer << endl;
    }
 
    return 0;
}
