#include <iostream>
#include <string>
#include <vector>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int max_height = 0;
    for (char c : word) {
        int height = h[c - 'a'];
        if (height > max_height) {
            max_height = height;
        }
    }
    return max_height * word.size();
}
