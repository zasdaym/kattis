#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, x, p, n, denied, sum;
    denied = 0; sum = 0;
    string s;
    cin >> l >> x;
    while (x--) {
        cin >> s >> p;
        if (s == "enter") {
            if (sum + p <= l) {
                sum += p;
            } else {
                denied++;
            }
        } else {
            sum -= p;
        }
    }
    cout << denied << endl;
    return 0;
}

