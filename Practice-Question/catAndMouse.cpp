#include <iostream>
#include <string>

std::string catAndMouse(int x, int y, int z) {
    int catA_dist = abs(x - z);
    int catB_dist = abs(y - z);

    if (catA_dist < catB_dist) {
        return "Cat A";
    } else if (catA_dist > catB_dist) {
        return "Cat B";
    } else {
        return "Mouse C";
    }
}

int main() {
    int q;
    std::cin >> q;

    for (int i = 0; i < q; i++) {
        int x, y, z;
        std::cin >> x >> y >> z;

        std::cout << catAndMouse(x, y, z) << std::endl;
    }

    return 0;
}
