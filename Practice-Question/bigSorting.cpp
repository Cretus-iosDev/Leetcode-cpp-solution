#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    return a.length() == b.length() ? a < b : a.length() < b.length();
}

int main() {
    int n;
    cin >> n;
    string unsorted[n];
    for (int i = 0; i < n; i++) cin >> unsorted[i];

    sort(unsorted, unsorted + n, comp);

    for (int i = 0; i < n; i++) cout << unsorted[i] << endl;

    return 0;
}
