#include <bits/stdc++.h> 
using namespace std; 

string gameOfStones(int n) 
{ 
    return (n % 7 == 0 || n % 7 == 1) ? "Second" : "First"; 
} 

int main() 
{ 
    int t; 
    cin >> t; 
    while (t--) 
    { 
        int n; 
        cin >> n; 
        cout << gameOfStones(n) << endl; 
    } 
    return 0; 
} 
