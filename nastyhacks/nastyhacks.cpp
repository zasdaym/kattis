#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, e, c;
    cin >> n;
    while (n--) {
        cin >> r >> e >> c;
        if (r+c == e) {
            cout << "does not matter" << endl;
        } else if (r+c < e) {
            cout << "advertise" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }
    return 0;
}

