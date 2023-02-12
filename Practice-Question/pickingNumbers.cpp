#include <vector>
#include <algorithm>

int pickingNumbers(std::vector<int> a) {
    int n = a.size();
    std::sort(a.begin(), a.end());
    
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (a[j] - a[i] <= 1) {
                count++;
            } else {
                break;
            }
        }
        maxCount = std::max(maxCount, count);
    }
    
    return maxCount;
}
