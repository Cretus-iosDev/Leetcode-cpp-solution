#include <vector>
#include <unordered_map>

int minimumDistances(std::vector<int> a) {
    std::unordered_map<int, int> last_occurrence;
    int min_distance = a.size();
    
    for (int i = 0; i < a.size(); i++) {
        if (last_occurrence.count(a[i])) {
            min_distance = std::min(min_distance, i - last_occurrence[a[i]]);
        }
        
        last_occurrence[a[i]] = i;
    }
    
    return min_distance == a.size() ? -1 : min_distance;
}
