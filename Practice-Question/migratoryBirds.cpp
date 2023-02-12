#include <iostream>
#include <algorithm>

using namespace std;

int migratoryBirds(int n, int arr[]) {
    int count[6] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int maxIndex = 1;
    for (int i = 2; i <= 5; i++) {
        if (count[i] > count[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << migratoryBirds(n, arr) << endl;
    return 0;
}
