#include <iostream>

using namespace std;

int pageCount(int n, int p) {
    int front = p / 2;
    int back = n / 2 - p / 2;
    return min(front, back);
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << pageCount(n, p) << endl;
    return 0;
}
