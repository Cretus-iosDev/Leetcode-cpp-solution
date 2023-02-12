#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector<int> arr) 
{
    sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;
    for (int i = 1; i < n; i++) 
    {
        int diff = abs(arr[i] - arr[i - 1]);
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int result = minimumAbsoluteDifference(n, arr);

    cout << result << endl;

    return 0;
}
