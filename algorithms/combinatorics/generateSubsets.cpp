#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void printVec(vector<vector<int>> v) {
    for (vector<int> subset : v) {
        for (int n : subset) 
            cout << n << ' ';
        cout << endl;
    }
}

vector<vector<int>> res;

void generateSubsets(vector<int> curr, int n, int k) {

    if (k > n){
        res.push_back(curr);
    } else {    
        curr.push_back(k);
        generateSubsets(curr, n, k + 1);
        curr.pop_back();
        generateSubsets(curr, n, k + 1);        
    }
}

vector<vector<int>> generateSubsetsWithBits(int n) { //generate subsets for first n nums
    vector<vector<int>> res1;

    for (int b = 0; b < (1 << n); b++) {
        vector<int> curr;
        for (int i = 0; i < b; i++)
            if (b & (1 << i)) curr.push_back(i);
        res1.push_back(curr);
    }
    return res1;
}

int main() {
    vector<int> s;

    generateSubsets(s, 3, 1);

    printVec(res);

    vector<vector<int>> res1 = generateSubsetsWithBits(3);
    printVec(res1);
}
