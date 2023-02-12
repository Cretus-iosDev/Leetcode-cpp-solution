#include <iostream>
#include <string>

void separateNumbers(std::string s) {
    for (int i = 1; i <= s.length() / 2; i++) {
        long long first = std::stoll(s.substr(0, i));
        long long num = first;
        int j = i;
        while (j < s.length()) {
            std::string next = std::to_string(++num);
            if (s.substr(j, next.length()) != next) {
                break;
            }
            j += next.length();
        }
        
        if (j == s.length()) {
            std::cout << "YES " << first << std::endl;
            return;
        }
    }
    
    std::cout << "NO" << std::endl;
}

int main() {
    int q;
    std::cin >> q;
    
    while (q--) {
        std::string s;
        std::cin >> s;
        
        separateNumbers(s);
    }
    
    return 0;
}
