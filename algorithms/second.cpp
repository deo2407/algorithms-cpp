#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> fact;

    int a;
    cin >> a;

    for (int i = 1; i * i <= a; i++) {
        if (a % i == 0) { 
            fact.push_back(i);
            if (i * i < a)
                fact.push_back(a / i);
        }
    }
    int res = 0;

    for (int num : fact) {
        string s = to_string(num);
        bool ok = 1;

        for (int i = 0; i < s.size() - i - 1; i++) {
            ok &= s[i] == s[s.size() - i - 1];
        }
        res += ok;
    }

    cout << res;
    return 0;
}