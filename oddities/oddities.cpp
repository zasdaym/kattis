#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x % 2 == 0) {
            printf("%d is even\n", x);
        } else {
            printf("%d is odd\n", x);
        }
    }
    return 0;
}

