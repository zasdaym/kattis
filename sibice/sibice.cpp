#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w, h, a;
    cin >> n >> w >> h;
    double max = sqrt((w*w) + (h*h));
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a > max) {
            cout << "NE" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
    return 0;
}

