#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Store the coordinates in an array and sort them
    int positions[] = {x1, x2, x3};
    sort(positions, positions + 3);

    // The median is the middle value after sorting
    int median = positions[1];

    // Calculate the total distance to the median
    int total_distance = abs(positions[0] - median) + abs(positions[1] - median) + abs(positions[2] - median);

    // Output the result
    cout << total_distance << endl;

    return 0;
}
