#include <bits/stdc++.h>
using namespace std;

long marcsCakewalk(int n, vector<int> calorie) {
    sort(calorie.begin(), calorie.end(), greater<int>());
    long miles = 0;
    for (int i = 0; i < n; i++) {
        miles += calorie[i] * pow(2, i);
    }
    return miles;
}

int main() {
    int n;
    cin >> n;
    vector<int> calorie(n);
    for (int i = 0; i < n; i++) {
        cin >> calorie[i];
    }
    cout << marcsCakewalk(n, calorie) << endl;
    return 0;
}
