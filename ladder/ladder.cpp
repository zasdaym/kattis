#include <bits/stdc++.h>
using namespace std;

int main() {
    double h, x, v;
    cin >> h >> v;
    v = v * M_PI / 180.0;
    x = h / sin(v);
    cout << ceil(x) << endl;
    return 0;
}

