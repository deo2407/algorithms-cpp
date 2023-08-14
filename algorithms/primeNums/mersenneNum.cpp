#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int E(int p) {
    if (p == 1) return 4;
    return pow(E(p - 1), 2) - 2;
}

int main() {
    int n;
    cin >> n;

    for (int i = 3; i <= n; i += 2) {
        int b = pow(2, i);
        if (E(i - 1) % (b - 1) == 0)
            cout << b - 1 << ' ';
    }
}
