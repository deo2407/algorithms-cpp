#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

const int MAX = 100;
int n, k;
int taken[MAX];

void print(int i) {
    cout << "( ";
    for (int j = 0; j < i; j++)
        cout << taken[j] << ' ';
    cout << ") \n";
}


void comb(int i, int after) {
    if (i > k) {
        return;
    }
    for (int j = after + 1; j <= n; j++) {
        taken[i - 1] = j;
        if (i == k) print(i);
        comb(i + 1, j);
    }
}

int main() {
    k = 3, n = 5;
    comb(1, 0);
}
