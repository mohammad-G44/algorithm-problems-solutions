#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int l, r;
        cin >> l >> r;

       
        cout << (((r + 1) / 2 - l / 2) / 2) << endl;
    }

    return 0;
}
