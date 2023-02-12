#include<bits/stdc++.h>
using namespace std;
string gridChallenge(vector<string> grid) {
    for (int i = 0; i < grid.size(); i++) {
        sort(grid[i].begin(), grid[i].end());
    }

    // check columns
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid.size() - 1; j++) {
            if (grid[j][i] > grid[j + 1][i]) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main()
{
    return 0;
}
