#include <iostream>
#include <string>

using namespace std;

string dayOfProgrammer(int year) {
    int day = 256;
    string result;
    if (year == 1918) {
        result = "26.09.1918";
    } else if ((year <= 1917 && year % 4 == 0) || (year > 1918 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))) {
        result = "12.09." + to_string(year);
    } else {
        result = "13.09." + to_string(year);
    }
    return result;
}

int main() {
    int year;
    cin >> year;
    cout << dayOfProgrammer(year) << endl;
    return 0;
}
