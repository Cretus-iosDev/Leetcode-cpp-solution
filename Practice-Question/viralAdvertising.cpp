#include<iostream>
using namespace std;

int viralAdvertising(int n) {
    int shared = 5, liked = 2, cumulative = 2;
    for (int i = 2; i <= n; i++) {
        shared = liked * 3;
        liked = shared / 2;
        cumulative += liked;
    }
    return cumulative;
}

int main() {
    int n;
    cin >> n;
    cout << viralAdvertising(n) << endl;
    return 0;
}
