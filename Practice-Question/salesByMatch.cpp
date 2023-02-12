/*
In this code, the sockMerchant function takes two parameters: n, 
the number of socks, and ar, an array of integers representing the colors 
of each sock. The function uses a map to store the number of each color sock and a 
variable pairs to store the number of pairs. The function loops through the array and 
stores the number of each color sock in the map. Then, it loops through the map and calculates 
the number of pairs by dividing the number of each color sock by 2 and adding it to the pairs variable. 
Finally, the function returns the pairs variable.
*/



#include <iostream>
#include <unordered_map>

int sockMerchant(int n, int ar[]) {
    std::unordered_map<int, int> socks;
    int pairs = 0;
    for (int i = 0; i < n; i++) {
        if (socks[ar[i]] == 1) {
            pairs++;
            socks[ar[i]] = 0;
        } else {
            socks[ar[i]] = 1;
        }
    }
    return pairs;
}

int main() {
    int n = 9;
    int ar[] = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int result = sockMerchant(n, ar);
    std::cout << result << std::endl;
    return 0;
}
/*
    TC - O(n)
    SC - O(n)
*/