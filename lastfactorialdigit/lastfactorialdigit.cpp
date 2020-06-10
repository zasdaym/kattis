#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        switch (n) {
            case 1:
                cout << 1 << endl;
                break;
            case 2:
                cout << 2 << endl;
                break;
            case 3:
                cout << 6 << endl;
                break;
            case 4:
                cout << 4 << endl;
                break;
            default:
                cout << 0 << endl;
        }
    }
    return 0;
}

