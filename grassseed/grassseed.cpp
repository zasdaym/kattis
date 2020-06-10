#include <bits/stdc++.h>
using namespace std;

int main() {
    double c, w, l, sum;
    int n;
    sum = 0;
    cin >> c >> n;
    while (n--) {
        cin >> w >> l;
        sum += c * w * l;
    }
    printf("%.7f\n", sum);
    return 0;
}

