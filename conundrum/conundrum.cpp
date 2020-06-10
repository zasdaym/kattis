#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, x, length;
    x = 0;
    string s;
    cin >> s;
    length = s.length();
    for (i=0; i<length-2; i+=3) {
        if (s[i] != 'P')
            x++;
        if (s[i+1] != 'E')
            x++;
        if (s[i+2] != 'R')
            x++;
    }
    cout << x << endl;
    return 0;
}

