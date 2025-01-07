#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++) {
        if (a[i] < 0) {
            cout << "NO" << endl;
            return;
        }
        int op = a[i];
        a[i] -= op;
        a[i + 1] -= 2 * op;
        a[i + 2] -= op;
    }

    if (a[n - 1] != 0 || a[n - 2] != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
