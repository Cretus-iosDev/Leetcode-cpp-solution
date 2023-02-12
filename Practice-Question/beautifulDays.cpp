#include<bits/stdc++.h>
using namespace std;

int beautifulDays(int i, int j, int k) {
    int count = 0; 
    for (int n = i; n <= j; n++) 
    { 
        int reverse = 0; 
        int temp = n; 
        while (temp != 0) 
        { 
            reverse = reverse * 10 + temp % 10; 
            temp = temp / 10; 
        } 
        int diff = abs(n - reverse); 
        if (diff % k == 0) 
            count++; 
    } 
    return count; 
}