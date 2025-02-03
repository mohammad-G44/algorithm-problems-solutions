#include <iostream>

using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    long long result = 0; 
   
    for (int w0 = 2; w0 <= w; w0 += 2) {
       
        for (int h0 = 2; h0 <= h; h0 += 2) {
            result += (w - w0 + 1) * (h - h0 + 1);
        }
    }

    cout << result << endl;
    return 0;
}
