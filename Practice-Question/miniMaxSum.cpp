#include <iostream>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long long sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    long long minSum = sum - *max_element(arr.begin(), arr.end());
    long long maxSum = sum - *min_element(arr.begin(), arr.end());
    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr(5);
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    miniMaxSum(arr);
    return 0;
}
