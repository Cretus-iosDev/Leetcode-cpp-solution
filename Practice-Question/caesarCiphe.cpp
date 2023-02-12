#include <iostream>
#include <string>
using namespace std;

string caesarCipher(string s, int k) {
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
        if (isupper(s[i])) {
        s[i] = ((s[i] - 'A' + k) % 26) + 'A';
        } else {
        s[i] = ((s[i] - 'a' + k) % 26) + 'a';
        }
        }
    }
return s;
}

int main() {
int n, k;
string s;
cin >> n >> s >> k;
cout << caesarCipher(s, k) << endl;
return 0;
}



