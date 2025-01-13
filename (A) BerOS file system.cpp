#include <iostream>
#include <string>
using namespace std;

int main() {
    string path, normalized_path;
    cin >> path;

   
    bool last_was_slash = false;

    for (char c : path) {
        if (c == '/') {
            
            if (!last_was_slash) {
                normalized_path += '/';
                last_was_slash = true;
            }
        } else {
            
            normalized_path += c;
            last_was_slash = false;
        }
    }

    
    if (normalized_path.size() > 1 && normalized_path.back() == '/') {
        normalized_path.pop_back();
    }

    cout << normalized_path << endl;

    return 0;
}
