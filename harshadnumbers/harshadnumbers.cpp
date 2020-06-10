#include <bits/stdc++.h>
using namespace std;

int digitsum(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int i, n, result;
    cin >> n;
    for (i=n; i<1000000000; i++) {
        if (result = i % digitsum(i) == 0)
            break;
    }
    cout << i << endl;
    return 0;
}

