#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double v, deg, x, y, h1, h2, t;
    cin >> n;
    while (n--) {
        cin >> v >> deg >> x >> h1 >> h2;
        deg = deg * M_PI / 180.0;
        t = x / (v * cos(deg));
        y = (v * sin(deg) * t) - (9.81 * t * t / 2);
        if (y >= h1+1 && y <= h2-1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
    return 0;
}

