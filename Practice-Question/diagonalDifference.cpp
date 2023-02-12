#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n-i-1];
    }
    return abs(sum1 - sum2);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << diagonalDifference(arr) << endl;
    return 0;
}
