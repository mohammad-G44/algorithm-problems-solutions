#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 
    int A, B, C;
    cin >> A >> B >> C;

    
    if (A == 0 && B == 0 && C == 0) {
        cout << -1 << endl;
        return 0;
    }

    
    if (A == 0) {
        if (B != 0) {
            double root = -static_cast<double>(C) / B;
            cout << 1 << endl;
            cout << fixed << setprecision(10) << root << endl;
        } else {
            
            cout << 0 << endl;
        }
        return 0;
    }

   
    long long discriminant = 1LL * B * B - 4LL * A * C;

    if (discriminant < 0) {
        
        cout << 0 << endl;
    } else if (discriminant == 0) {
       
        double root = -static_cast<double>(B) / (2 * A);
        cout << 1 << endl;
        cout << fixed << setprecision(10) << root << endl;
    } else {
        
        double root1 = (-B - sqrt(discriminant)) / (2 * A);
        double root2 = (-B + sqrt(discriminant)) / (2 * A);
        
        if (root1 > root2) swap(root1, root2);
        cout << 2 << endl;
        cout << fixed << setprecision(10) << root1 << endl;
        cout << fixed << setprecision(10) << root2 << endl;
    }

    return 0;
}
