#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, set;
    set = 0;
    while (cin >> n) {
        if (n == 0)
            break;
        set++;
        string s[15] = {};
        int i, a, b;
        a = 0;
        b = n-1;
        for (i=1; i<=n; i++) {
            if (i % 2 == 1) {
                cin >> s[a];
                a++;
            } else {
                cin >> s[b];
                b--;
            }
        }
        cout << "SET " << set << endl;
        for (i=0; i<n; i++) {
           cout << s[i] << endl;
        }
    }
    return 0;
}

