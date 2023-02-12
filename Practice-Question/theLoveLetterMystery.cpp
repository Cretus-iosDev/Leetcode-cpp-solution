#include<bits/stdc++.h>
using namespace std;

int theLoveLetterMystery(string s) {
    int operations = 0;
int length = s.length();
for (int i = 0; i < length / 2; i++) {
operations += abs(s[i] - s[length - i - 1]);
}
return operations;
}

int main()
{
    return 0;
}