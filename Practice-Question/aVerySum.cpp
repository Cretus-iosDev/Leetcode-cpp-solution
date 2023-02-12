#include <iostream>

using namespace std;

long aVeryBigSum(int n, long ar[]) {
    long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    long ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    cout << aVeryBigSum(n, ar) << endl;
    return 0;
}
