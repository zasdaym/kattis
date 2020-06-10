#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double b, p, h, diff;
    cin >> n;
    while (n--) {
        cin >> b >> p;
        h = 60 * b / p;
        diff = h / b;
        printf("%.4f %.4f %.4f\n", h-diff, h, h+diff);
    }
    return 0;
}

