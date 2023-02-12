#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n, string password) {
    int count = 0;
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    bool digit = false, lower = false, upper = false, special = false;
    for (int i = 0; i < n; i++) {
        if (isdigit(password[i]) && !digit) {
            digit = true;
        } else if (islower(password[i]) && !lower) {
            lower = true;
        } else if (isupper(password[i]) && !upper) {
            upper = true;
        } else if (special_characters.find(password[i]) != string::npos && !special) {
            special = true;
        }
    }
    if (!digit) count++;
    if (!lower) count++;
    if (!upper) count++;
    if (!special) count++;
    return max(count, 6 - n);
}

int main() {
    int n;
    string password;
    cin >> n >> password;
    cout << minimumNumber(n, password) << endl;
    return 0;
}
