#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    while (p--) {
        unsigned int k, b, n, sum;
        sum = 0;
        cin >> k >> b >> n;
        while (n != 0) {
            sum += pow((n % b), 2);
            n /= b;
        }
        cout << k << " " << sum << endl;
    }
}
