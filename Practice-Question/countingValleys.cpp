#include <bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path) {
    int level = 0, valleys = 0;
    for (char c : path) {
        if (c == 'U') level++;
        else level--;
        if (level == 0 && c == 'U') valleys++;
    }
    return valleys;
}

int main() {
    int steps;
    string path;
    cin >> steps >> path;
    cout << countingValleys(steps, path) << endl;
    return 0;
}
