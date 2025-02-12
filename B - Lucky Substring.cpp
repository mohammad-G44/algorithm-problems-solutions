#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int count4 = 0, count7 = 0;

    for (char c : s) {
        if (c == '4') count4++;
        if (c == '7') count7++;
    }

    if (count4 == 0 && count7 == 0) {
        cout << "-1\n";
    } else if (count4 >= count7) {
        cout << "4\n";
    } else {
        cout << "7\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
