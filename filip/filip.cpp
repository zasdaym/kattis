#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    int x, y;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    x = stoi(a);
    y = stoi(b);
    if (x > y)
        cout << x << endl;
    else
        cout << y << endl;

    return 0;
}

