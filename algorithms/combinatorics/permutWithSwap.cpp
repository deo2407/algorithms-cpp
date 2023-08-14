#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int n;
void print(int A[]) {;
    for (int i = 0; i < n; i++) 
        cout << A[i] << ' ';
    cout << endl;
}

void permute(int A[], int n) {
    if (n == 0) {
        print(A);
        return;
    }
    permute(A, n - 1);
    for (int i = 0; i < n - 1; i++) {
        int swap = A[n - 1]; A[n - 1] = A[i]; A[i] = swap;
        permute(A, n - 1);
        swap = A[n - 1]; A[n - 1] = A[i]; A[i] = swap;
    }
}

int main() {
    int A[] = {1, 2, 3};
    n = sizeof(A) / sizeof(A[0]);

    permute(A, n);
}
