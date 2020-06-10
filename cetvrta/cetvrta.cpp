#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[3];
    int y[3];
    int a[1000] = {0};
    int b[1000] = {0};
    int m, n;
    for (int i=0; i<3; i++) {
        cin >> x[i] >> y[i];
        a[x[i]] += 1;
        b[y[i]] += 1;
    }
    for (int i=0; i<3; i++) {
        if (a[x[i]] == 1) {
            m = x[i];            
        }
        if (b[y[i]] == 1) {
            n = y[i];            
        }
    }
    cout << m << " " << n << endl;
    return 0;
}

