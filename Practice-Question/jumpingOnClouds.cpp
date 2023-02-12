#include <bits/stdc++.h> 
using namespace std; 

int jumpingOnClouds(vector<int> c, int k) 
{ 
    int energy = 100; 
    for (int i = 0; i < c.size(); i = (i + k) % c.size()) 
    { 
        energy -= 1 + 2 * c[i]; 
    } 
    return energy; 
} 

int main() 
{ 
    int n, k; 
    cin >> n >> k; 
    vector<int> c(n); 
    for (int i = 0; i < n; i++) 
    { 
        cin >> c[i]; 
    } 
    cout << jumpingOnClouds(c, k) << endl; 
    return 0; 
} 
