#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n, m, a, b, i;
    cin >> n >> m;
    if (n > m) {
        a = n - m + 1;
        b = m;
    } else {
        a = m - n + 1;
        b = n;
    }
    for (i=1; i<=a; i++) {
        printf("%d\n", b+i);
    }
    return 0;
}

