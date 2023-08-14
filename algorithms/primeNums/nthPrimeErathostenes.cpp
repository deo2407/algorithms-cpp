#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int n;
    cin >> n;
    bool sieve[n + 1] {0};

    int i = 2, j;
    while(i <= n) {
        if (sieve[i] == 0) {
            cout << i << ' ';
            j = i * i;
            while (j <= n) {
                sieve[j] = 1;
                j += i;
            }
        }
        i++;
    }
}
