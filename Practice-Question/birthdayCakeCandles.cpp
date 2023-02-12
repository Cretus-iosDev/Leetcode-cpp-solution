#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, int candles[]) {
    int max_height = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (candles[i] > max_height) {
            max_height = candles[i];
            count = 1;
        } else if (candles[i] == max_height) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int candles[n];
    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }
    cout << birthdayCakeCandles(n, candles) << endl;
    return 0;
}
