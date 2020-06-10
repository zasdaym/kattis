#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

    int a;
    double b, c;
    cin >> a >> b;
    if (a % 5 != 0) {
        printf("%.2f\n", b);
    } else {
        c = b - a - 0.50;
        printf("%.2f\n", c);
    }
    return 0;
}

