#include <iostream>

int saveThePrisoner(int n, int m, int s) {
    int result = (m + s - 1) % n;
    return (result == 0) ? n : result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m, s;
        std::cin >> n >> m >> s;
        std::cout << saveThePrisoner(n, m, s) << std::endl;
    }
    return 0;
}
