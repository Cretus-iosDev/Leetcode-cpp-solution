#include<bits/stdc++.h>
using namespace std;
int beautifulBinaryString(string b) {
    int count = 0;
    for (int i = 0; i < b.length() - 2; i++) {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
            count++;
            i += 2;
        }
    }
    return count;
}

int main()
{
    return 0;
}