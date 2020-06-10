#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        float a, b, c, x, y;
        string result = "Impossible";
        cin >> x >> y >> c;
        a = max(x, y);
        b = min(x, y);
        if (a+b == c || a-b == c || a*b == c || c*b == a)
            result = "Possible";
        cout << result << endl;
    }
    return 0;
}
