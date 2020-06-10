#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, sum, max, win;
    sum = 0;
    max = 0;
    win = 0;
    for (i=0; i<5; i++) {
        for (j=0; j<4; j++) {
            cin >> n;
            sum += n;
        }
        if (sum > max) {
            max = sum;
            win = i + 1;
        }
        sum = 0;
    }
    cout << win << " " << max << endl;
    return 0;
}

