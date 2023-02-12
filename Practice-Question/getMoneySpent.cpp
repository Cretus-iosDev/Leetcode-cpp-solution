#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(int keyboards[], int drives[], int b, int n, int m)
{
    int maxSpent = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = keyboards[i] + drives[j];
            if (sum > maxSpent && sum <= b) {
                maxSpent = sum;
            }
        }
    }
    return maxSpent;
}

int main()
{
    int b, n, m;
    cin >> b >> n >> m;
    int keyboards[n];
    for (int i = 0; i < n; i++) {
        cin >> keyboards[i];
    }
    int drives[m];
    for (int i = 0; i < m; i++) {
        cin >> drives[i];
    }
    cout << getMoneySpent(keyboards, drives, b, n, m);
    return 0;
}
