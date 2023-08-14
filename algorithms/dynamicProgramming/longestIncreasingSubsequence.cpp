#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int test[] {-1, 1, 2, 3, 4, 2, 2, 2, 2, 8, 6, 9}, n = sizeof(test) / sizeof(int);

int main() {
    int dp[n], res = 0;

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (test[i] > test[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << res << endl;

    for (int num : dp)
        cout << num << ' ';
}