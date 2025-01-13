#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int people_at_stop = 0;  // Track number of people waiting at the stop

    for (int i = 0; i < n; ++i) {
        string event_type;
        int value;
        cin >> event_type >> value;

        if (event_type == "P") {
            // Add people arriving at the stop
            people_at_stop += value;
        } else if (event_type == "B") {
            // Check if Monocarp can board the bus
            if (people_at_stop < value) {
                cout << "YES\n";
                // If Monocarp boards, remove one seat from available seats
                value--;
            } else {
                cout << "NO\n";
            }
            // Reduce the number of waiting people by the number of available seats
            people_at_stop = max(0, people_at_stop - value);
        }
    }

    return 0;
}
