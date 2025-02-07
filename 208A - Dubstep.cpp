#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;


    while (s.find("WUB") != string::npos) {
        s.replace(s.find("WUB"), 3, " "); 
    }

   
    string result;
    bool space = false;
    for (char c : s) {
        if (c != ' ') {
            if (space && !result.empty()) result += " ";
            result += c;
            space = false;
        } else {
            space = true;
        }
    }

    cout << result << endl;
    return 0;
}
