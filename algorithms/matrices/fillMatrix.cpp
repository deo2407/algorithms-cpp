#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int matrix[n][n];
    int num = 1;

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (i == j)
                matrix[i][j] = 0;
            else if (i > j)
                matrix[i][j] = num++;
        }
    }
    for (int j = n - 1; j >= 0; j--) {
        for (int i = n - 1; i >= 0; i--) {
            if (i == j)
                matrix[i][j] = 0;
            else if (i < j)
                matrix[i][j] = num++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
}
