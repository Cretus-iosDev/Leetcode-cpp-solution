#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b) {
int count = 0;
for (int i = sqrt(a); i * i <= b; i++) {
if (i * i >= a && i * i <= b) {
count++;
}
}
return count;
}

int main() {
int t;
cin >> t;
while (t--) {
int a, b;
cin >> a >> b;
cout << squares(a, b) << endl;
}
return 0;
}



