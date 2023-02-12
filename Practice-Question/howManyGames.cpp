#include<bits/stdc++.h>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
    int games = 0;
    int price = p;
    while (s >= price) {
        games++;
        s -= price;
        price = max(price - d, m);
    }
    return games;
}


int main()
{
    return 0;
}