#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

vector<int> res;
vector<vector<int>> matrix { { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };


void spiralMatrix(int n) {
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        for (int i = rowStart; i <= rowEnd; i++)
            res.push_back(matrix[i][colStart]);
        colStart++;

        for (int i = colStart; i <= colEnd; i++)
            res.push_back(matrix[rowEnd][i]);
        rowEnd--;

        if (rowEnd >= rowStart) {
            for (int i = rowEnd; i >= rowStart; i--)
                res.push_back(matrix[i][colEnd]);
            colEnd--;
        }

        if (colEnd >= colStart) {
            for (int i = colEnd; i >= colStart; i--) 
                res.push_back(matrix[rowStart][i]);
            rowStart++;
        }
    }
}

int main() {
    int n = 4;

    spiralMatrix(n);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
}
