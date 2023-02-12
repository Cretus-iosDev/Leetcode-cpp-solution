#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, int n, int height[]) {
    int max_height = 0;
    for (int i = 0; i < n; i++) {
        max_height = max(max_height, height[i]);
    }
    return max(0, max_height - k);
}

int main() {
    int n, k;
    cin >> n >> k;
    int height[n];
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    cout << hurdleRace(k, n, height) << endl;
    return 0;
}
