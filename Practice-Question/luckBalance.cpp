#include<bits/stdc++.h>
using namespace std;
int luckBalance(int k, vector<vector<int>> contests) {
    int luck = 0;
    vector<int> importantContests;

    // Separate important and unimportant contests
    for (vector<int> contest : contests) {
        if (contest[1] == 1) {
            importantContests.push_back(contest[0]);
        } else {
            luck += contest[0];
        }
    }

    // Sort the important contests in decreasing order
    sort(importantContests.begin(), importantContests.end(), greater<int>());

    // Add luck from important contests
    for (int i = 0; i < importantContests.size(); i++) {
        if (i < k) {
            luck += importantContests[i];
        } else {
            luck -= importantContests[i];
        }
    }

    return luck;
}

int main()
{
    return 0;
}