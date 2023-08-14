#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    cout << gcd(15, 10) << endl;
    cout << lcm(15, 10) << endl;
}