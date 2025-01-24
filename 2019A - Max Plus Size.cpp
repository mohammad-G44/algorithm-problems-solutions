#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Variables to store the max scores for odd and even indices
    int max_val_even = 0, count_even = 0;
    int max_val_odd = 0, count_odd = 0;

    // Traverse the array and calculate max and count for both configurations
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Even-indexed elements
            max_val_even = max(max_val_even, a[i]);
            count_even++;
        } else { // Odd-indexed elements
            max_val_odd = max(max_val_odd, a[i]);
            count_odd++;
        }
    }

    // Calculate scores for both configurations
    int score_even = max_val_even + count_even;
    int score_odd = max_val_odd + count_odd;

    // Output the maximum score
    cout << max(score_even, score_odd) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
