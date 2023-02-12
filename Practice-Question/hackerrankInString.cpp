#include <string>

std::string hackerrankInString(std::string s) {
    std::string target = "hackerrank";
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (j < target.length() && s[i] == target[j]) {
            j++;
        }
    }
    return (j == target.length() ? "YES" : "NO");
}
