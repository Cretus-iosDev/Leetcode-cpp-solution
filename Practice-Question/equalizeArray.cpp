#include<bits/stdc++.h>
using namespace std;

int equalizeArray(std::vector<int> arr) {
    unordered_map<int, int> frequency;
    int max_frequency = 0;
    
    for (const auto &n : arr) {
        frequency[n]++;
        max_frequency = std::max(max_frequency, frequency[n]);
    }
    
    return arr.size() - max_frequency;
}


int main()
{
    return 0;
}