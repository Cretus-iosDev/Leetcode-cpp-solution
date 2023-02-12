#include <iostream>
#include <string>

using namespace std;

long repeatedString(string s, long n) {
    long count_a = 0;
    long len = s.length();

    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') count_a++;
    }

    long repeat = n / len;
    long remain = n % len;

    count_a *= repeat;

    for (int i = 0; i < remain; i++) {
        if (s[i] == 'a') count_a++;
    }

    return count_a;
}
