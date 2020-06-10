#include <bits/stdc++.h>
using namespace std;

int digitsum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int l, d, x, n, m, i;

    cin >> l >> d >> x;

    for (i=l; i<=d; i++) {
        if(digitsum(i) == x) {
            n = i;
            break;
        }
    }

    for (i=d; i>=l; i--) {
        if(digitsum(i) == x) {
            m = i;
            break;
        }
    }

    cout << n << endl << m << endl;
    return 0;
}

