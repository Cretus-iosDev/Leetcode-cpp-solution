#include <iostream>
#include <string>

using namespace std;

int marsExploration(string s) {
    int changes = 0;
    for (int i = 0; i < s.length(); i += 3) {
        if (s[i] != 'S') {
            changes++;
        }
        if (s[i + 1] != 'O') {
            changes++;
        }
        if (s[i + 2] != 'S') {
            changes++;
        }
    }
    return changes;
}

int main() {
    string s;
    cin >> s;
    cout << marsExploration(s) << endl;
    return 0;
}
