#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    int n = sticks.size();
    sort(sticks.begin(), sticks.end());
    for (int i = n - 3; i >= 0; i--) {
        if (sticks[i] + sticks[i + 1] > sticks[i + 2]) {
            return {sticks[i], sticks[i + 1], sticks[i + 2]};
        }
    }
    return {-1};
}

int main() {
    int n;
    cin >> n;
    vector<int> sticks(n);
    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
    }
    vector<int> result = maximumPerimeterTriangle(sticks);
    if (result[0] == -1) {
        cout << -1 << endl;
    } else {
        cout << result[0] << " " << result[1] << " " << result[2] << endl;
    }
    return 0;
}
