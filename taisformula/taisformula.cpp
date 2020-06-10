#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double t1, v1, t2, v2, sum;
    sum = 0;
    cin >> n;
    cin >> t2 >> v2;
    n--;
    while (n--) {
        cin >> t1 >> v1;
        sum += ((v1+v2)/2) * (t1-t2);
        t2 = t1;
        v2 = v1;
    }
    printf("%.6f\n", sum / 1000);
    return 0;
}
