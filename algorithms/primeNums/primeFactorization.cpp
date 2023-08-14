#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;
    while (n != 1) {
        int k = 0;
        while (n % i == 0) {
            n /= i;
            k++;
        }
        while (k--)
            cout << i << ' ';
        i++;
    }
}
