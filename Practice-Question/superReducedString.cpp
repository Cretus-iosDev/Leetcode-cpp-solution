#include <iostream>
#include <string>

using namespace std;

string superReducedString(string s) {
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            s.erase(i - 1, 2);
            i = 0;
        }
    }
    return s.empty() ? "Empty String" : s;
}

int main() {
    string s = "aab";
    cout << superReducedString(s) << endl;
    return 0;
}
