#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, p1, p2, sum;
    sum = 0;
    cin >> n;
    while (n--) {
        cin >> p;
        p1 = p / 10;
        p2 = p % 10;
        sum += pow(p1, p2);
    }
    cout << sum << endl;
    return 0;
}

