#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float q, y, sum;
    sum = 0;
    cin >> n;
    while(n--) {
        cin >> q >> y;
        sum += (q*y);
    }
    printf("%.3f\n", sum);
    return 0;
}

