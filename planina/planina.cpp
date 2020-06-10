#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, x;
    cin >> n;
    a = 2;
    for (int i=0; i<n; i++) {
        a = a * 2 - 1;
    }
    x = a * a;
    cout << x << endl;
    return 0;
}

