#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n, pos, min = 100000001;
    cin >> n;
    for (i=0; i<n; i++) {
        int x;
        cin >> x;
        if (x < min) {
            min = x;
            pos = i;
        }
    }
    cout << pos << endl;
    return 0;
}
