#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Reading the number of test cases

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int sum = a + b + c;
        int d = (n / sum) * 3;
        int remainder = n % sum;

        if (remainder == 0) {
            cout << d << endl;
        } else if (remainder <= a) {
            cout << d + 1 << endl;
        } else if (remainder <= a + b) {
            cout << d + 2 << endl;
        } else {
            cout << d + 3 << endl;
        }
    }

    return 0;
}
