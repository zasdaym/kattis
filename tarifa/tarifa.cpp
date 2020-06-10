#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int x, n, p, sum;
    sum = 0;
    cin >> x >> n;
    while(n--) {
        cin >> p;
        sum = sum + x - p;
    }
    cout << (sum + x) << endl;
    return 0;
}

