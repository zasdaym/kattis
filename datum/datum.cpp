#include <bits/stdc++.h>
using namespace std;

int main() {
    int code[13] = {0, 1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6};
    string day[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int d, m, x;
    cin >> d >> m;
    x = (2 + d + code[m] + 6 + 9) % 7;
    cout << day[x] << endl;
    return 0;
}

