#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool win(int pos, const vector<int>& a) {
    long long power = a[pos]; // Use long long to avoid overflow for large sums
    for (int i = 0; i < a.size(); i++) {
        if (i == pos) continue;
        if (power < a[i]) {
            return false;
        }
        power += a[i];
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b = a; // Copy array
        sort(a.begin(), a.end());

        int l = -1, r = n - 1;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (win(m, a)) {
                r = m;
            } else {
                l = m;
            }
        }

        vector<int> winIds;
        for (int i = 0; i < n; i++) {
            if (b[i] >= a[r]) {
                winIds.push_back(i + 1); // 1-based index
            }
        }

        cout << winIds.size() << endl;
        for (int id : winIds) {
            cout << id << " ";
        }
        cout << endl;
    }

    return 0;
}
