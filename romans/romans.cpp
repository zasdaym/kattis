#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    cin >> x;
    int a = x * (5280.0 / 4854.0) * 1000.0 + 0.5;
    cout << a << endl;
    return 0;
}
