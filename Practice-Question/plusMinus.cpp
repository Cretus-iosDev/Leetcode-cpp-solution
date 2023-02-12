#include <iostream>
#include <iomanip>

using namespace std;

void plusMinus(int n, int arr[]) {
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    cout << fixed << setprecision(6) << (double) pos / n << endl;
    cout << fixed << setprecision(6) << (double) neg / n << endl;
    cout << fixed << setprecision(6) << (double) zero / n << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    plusMinus(n, arr);
    return 0;
}
