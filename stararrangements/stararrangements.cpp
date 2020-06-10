#include <bits/stdc++.h>
using namespace std;

bool checkPattern(int a, int b, int c) {
    int sum = 0, d = 0;
    if (a+b == c)
        return true;
    while (sum < c) {
        if (d%2 == 0) {
            sum += a;
        } else {
            sum += b;
        }
        d++;
    }
    if (sum == c)
        return true;
    else
        return false;
}

int main() {
    int s;
    cin >> s;
    cout << s << ":" << endl;
    for (int i=2; i<=(s/2)+1; i++) {
        for (int j=i-1; j<=i; j++) {
            if (checkPattern(i, j, s))
                cout << i << "," << j << endl;
        }
    }
    return 0;
}
