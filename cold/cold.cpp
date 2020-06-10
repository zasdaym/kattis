#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a;
    cin >> t;
    a = 0;
    while(t--) {
        cin >> n;
        if (n<0) {
            a++;
        }
    }
    printf("%d\n", a);
}
