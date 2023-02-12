#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector<int> &arr)
{
    int pivot = arr[0];
    vector<int> left, right, result;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < pivot)
        {
            left.push_back(arr[i]);
        }
        else
        {
            right.push_back(arr[i]);
        }
    }

    for (int i = 0; i < left.size(); i++)
    {
        result.push_back(left[i]);
    }
    result.push_back(pivot);
    for (int i = 0; i < right.size(); i++)
    {
        result.push_back(right[i]);
    }
    return result;
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

    vector<int> result = quickSort(arr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
