#include<bits/stdc++.h>
using namespace std;

int towerBreakers(int n, int m) {
    if (m == 1 || n % 2 == 0) return 2;
    else return 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << towerBreakers(n, m) << endl;
    return 0;
}
