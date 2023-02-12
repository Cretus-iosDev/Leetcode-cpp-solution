#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int cnt = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    cout << camelcase(s) << endl;
    return 0;
}
