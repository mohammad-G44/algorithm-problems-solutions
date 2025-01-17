#include <bits/stdc++.h>
using namespace std;

/*
    Problem A: Circuit
    Editorial code by AkiLotus
*/

namespace solution {
    bool hasMultipleTests = true;

    int n;
    vector<int> a;

    void preprocess() {

    }

    void input(int testcase) {
        cin >> n;
        a.clear();
        a.resize(n * 2);
        for (auto &z: a) cin >> z;
    }

    void solve(int testcase) {
        int cnt0 = 0;

        for (auto &z: a) {
            cnt0 += z;
        }

        cout << (cnt0 & 1) << " " << min(cnt0, n * 2 - cnt0) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution::preprocess();

    int t = 1;
    if (solution::hasMultipleTests) cin >> t;

    for (int testcase=1; testcase<=t; testcase++) {
        solution::input(testcase);
        solution::solve(testcase);
    }

    return 0;
}
