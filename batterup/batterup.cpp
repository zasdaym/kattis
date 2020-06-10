#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, i, x, sum;
    sum = 0;
    cin >> n;
    i = n;
    while (i--) {
        cin >> x;
        if (x == -1) {
            n--;
            continue;
        }
        sum += x; 
    }
    cout << sum / n << endl;
    return 0;
}

