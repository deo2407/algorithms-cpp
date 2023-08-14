#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX = 100;
int taken[MAX];
char used[MAX];

int k, n;
void print(int i) {
    cout << "( ";
    for (int j = 0; j < i; j++)
        cout << taken[j] + 1 << ' ';
    cout << ") \n";
}

void variateWithoutRep(int i) {
    if (i == k) {
        print(i);
        return;
    }
    for (int j = 0; j < n; j++) {
        if (!used[j]) {
            used[j] = 1;
            taken[i] = j;
            variateWithoutRep(i + 1);
            used[j] = 0;
        }
    }
}

void variate(int i) { // with repetitions
    if (i == k) {
        print(i);
        return;
    }
    
    for (int j = 0; j < n; j++) {
        taken[i] = j;
        variate(i + 1);
    }
}

int main() {
    k = 4, n = 2;
    variate(0);
}
