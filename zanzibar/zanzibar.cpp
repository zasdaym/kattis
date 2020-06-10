#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, sum = 0;
        cin >> a;
        b = a;
        while (cin >> a) {
            if (a == 0)
                break;
            if (a-(b*2) > 0) {
                sum += a-(b*2);
            }
            b = a;

        }
        cout << sum << endl;
    }
    return 0;
}
