#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s, sum;
    int t[2] = {0, 0};
    while (cin >> n) {
        if (n != -1) {
            sum = 0;
            t[1] = 0;
            for (int i=0; i<n; i++) {
                cin >> s >> t[0];
                sum += s * (t[0] - t[1]);
                t[1] = t[0];
            }
            cout << sum << " miles" << endl;
        }
    }
    return 0;
}

