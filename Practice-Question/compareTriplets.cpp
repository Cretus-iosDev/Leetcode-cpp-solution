#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> res(2,0);
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > b[i]) res[0]++;
        else if(a[i] < b[i]) res[1]++;
    }
    return res;
}

int main()
{
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> res = compareTriplets(a, b);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}
