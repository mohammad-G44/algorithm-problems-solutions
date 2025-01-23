#include <iostream>
#include <deque>
using namespace std;

void solve() {
    int n;
    cin >> n;
    deque<char> s;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        s.push_back(c);
    }

    while (!s.empty() && s.front() == 'W') {
        s.pop_front();
    }
    while (!s.empty() && s.back() == 'W') {
        s.pop_back();
    }

    cout << s.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
