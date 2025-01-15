#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int _ = 0; _ < t; ++_) {
        int n;
        cin >> n;
        
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
            --c[i];
        }
        
        vector<int> cnt(n, 0);
        for (int x : c) {
            cnt[x]++;
        }
        
        int exactly1 = 0, morethan1 = 0;
        for (int x : cnt) {
            if (x == 1) {
                exactly1++;
            } else if (x > 1) {
                morethan1++;
            }
        }

        cout << morethan1 + ((exactly1 + 1) / 2) * 2 << endl;
    }

    return 0;
}
