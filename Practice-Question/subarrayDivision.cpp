#include <iostream>

using namespace std;

int birthday(int n, int s[], int d, int m) {
    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = i; j < i + m; j++) {
            sum += s[j];
        }
        if (sum == d) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, d, m;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    cin >> d >> m;
    cout << birthday(n, s, d, m) << endl;
    return 0;
}
