#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string c;
        cin >> n >> c;

        int u = 0;
        for (int i = 0; i < n; ++i) {
            bool fl = (c[i] == '1') && u;
            u ^= (c[i] - '0');

            if (i != 0) {
                cout << (fl ? '-' : '+');
            }
        }
        cout << '\n';
    }

    return 0;
}
