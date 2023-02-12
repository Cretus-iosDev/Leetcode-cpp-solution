#include <iostream>
using namespace std;

string angryProfessor(int k, int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) count++;
    }
    if (count >= k) return "NO";
    else return "YES";
}

int main() {
    int t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int j = 0; j < n; j++) 
            cin >> a[j];
        cout << angryProfessor(k, a, n) << endl;
    }
    return 0;
}