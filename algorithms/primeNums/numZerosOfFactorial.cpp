#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int n;
    cin >> n;

    int res = 0, p = 5;
    while (n >= p) {
        res += n / p;
        p *= 5;
    } 
    cout << res;
}
