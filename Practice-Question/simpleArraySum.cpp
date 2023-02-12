#include<iostream>

using namespace std;

int simpleArraySum(int n, int ar[]) {
    int sum = 0; // A variable to store the sum of the array elements
    
    // Loop through the array and add each element to the sum
    for(int i = 0; i < n; i++) {
        sum += ar[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    cout << simpleArraySum(n, ar) << endl;
    return 0;
}
