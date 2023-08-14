#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX = 100;
char used[MAX] {0};
int position[MAX];

void printPerm(int n) {
    for (int i = 0; i < n; i++)
        cout << position[i] + 'a' << ' ';
    cout << endl;
}

void permute(int i, int n) {
    if (i == n) {
        printPerm(n);
        return;
    }
    for (int k = 0; k < n; k++) {
        if (!used[k]) {
            used[k] = 1;
            position[i] = k;
            permute(i + 1, n);
            used[k] = 0;
        }
    }
}

int main() {
    // string s = "ABC";

    // do {
    //     cout << s << endl;
    // } while (next_permutation(s.begin(), s.end()));

    permute(0, 3);
}
