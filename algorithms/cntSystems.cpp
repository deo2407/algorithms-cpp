#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

char getChar(int num) {
    return (num < 10) ? num + '0' : num + 'A' - 10; 
}

string res;
void decToP(int num, int p) {
    if (num == 0)
        return;

    decToP(num / p, p);

    res += getChar(num % p);
}

int main() {
    decToP(63, 16);
    cout << res;
}
