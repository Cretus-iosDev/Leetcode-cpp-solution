#include<bits/stdc++.h>
using namespace std;
int beautifulTriplets(int d, vector<int> arr) {
    int count = 0;
    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

int main()
{
    return 0;
}