#include <bits/stdc++.h> 
using namespace std;

string pangrams(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int char_count[26] = {0};
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            char_count[s[i] - 'A']++;
        }
        if (s[i] >= 'a' && s[i] <= 'z') {
            char_count[s[i] - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (char_count[i] == 0) {
            return "not pangram";
        }
    }
    return "pangram";
}
