#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int n, num;
    cin >> n;

    int twos = 0, fives = 0;
    while (n--) {
        cin >> num;

        while (num % 2 == 0) {
            twos++;
            num /= 2;
        }
        while (num % 5 == 0) {
            fives++;
            num /= 5;
        }
    }
    cout << min(twos, fives);
}
