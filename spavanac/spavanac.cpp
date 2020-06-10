#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned short int h, m;
    cin >> h >> m;
    if (m >= 45) {
        m = m - 45;
    } else {
        m = m + 15;
        if (h == 0)
            h = 24;
        h = h -1;
    }
    
    cout << h << " " << m << endl;
    return 0;
}

