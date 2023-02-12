#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int max = scores[0];
    int min = scores[0];
    int max_break = 0;
    int min_break = 0;
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
            max_break++;
        }
        if (scores[i] < min) {
            min = scores[i];
            min_break++;
        }
    }
    cout << max_break << " " << min_break << endl;
    return 0;
}
