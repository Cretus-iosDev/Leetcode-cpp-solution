#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string minute = s.substr(3, 2);
    string second = s.substr(6, 2);
    string am_pm = s.substr(8, 2);
    if (hour == 12 && am_pm == "AM") hour = 0;
    if (hour != 12 && am_pm == "PM") hour += 12;
    string res = to_string(hour);
    if (hour < 10) res = "0" + res;
    res += ":" + minute + ":" + second;
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << timeConversion(s) << endl;
    return 0;
}
