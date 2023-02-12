#include <iostream>
#include <vector>

using namespace std;

vector<int> serviceLane(int n, vector<vector<int>> cases) {
    vector<int> widths(n);
    for (int i = 0; i < n; i++) {
        cin >> widths[i];
    }
    vector<int> results;
    for (int i = 0; i < cases.size(); i++) {
        int start = cases[i][0];
        int end = cases[i][1];
        int min_width = widths[start];
        for (int j = start + 1; j <= end; j++) {
            if (widths[j] < min_width) {
                min_width = widths[j];
            }
        }
        results.push_back(min_width);
    }
    return results;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<vector<int>> cases(t, vector<int>(2));
    for (int i = 0; i < t; i++) {
        cin >> cases[i][0] >> cases[i][1];
    }
    vector<int> results = serviceLane(n, cases);
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    return 0;
}
