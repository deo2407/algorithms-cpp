#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int arr[] {-1, 2, -3, 4, 1, 5, 5, -1, 7, 9};
int n = sizeof(arr) / sizeof(int);

int main() {
    int maxCurr = 0, res = 0;

    for (int i = 0; i < n; i++) {
        maxCurr = max(arr[i], maxCurr + arr[i]);
        res = max(maxCurr, res);
    }
    cout << res;
}
