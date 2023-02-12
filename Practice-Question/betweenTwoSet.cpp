#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int getTotalX(vector<int> a, vector<int> b) {
    int l = a[0];
    for (int i = 1; i < a.size(); i++)
        l = lcm(l, a[i]);
    int g = b[0];
    for (int i = 1; i < b.size(); i++)
        g = gcd(g, b[i]);
    int count = 0;
    for (int i = l, j = 2; i <= g; i = l * j, j++)
        if (g % i == 0)
            count++;
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << getTotalX(a, b) << endl;
    return 0;
}
