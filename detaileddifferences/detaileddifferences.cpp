#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a;
    string b;
    char c[51];
    cin >> n;
    while (n--) {
        cin >> a >> b;
        int i;
        for (i=0; i<a.length(); i++) {
            if (a[i] == b[i])
                c[i] = '.';
            else
                c[i] = '*';
        }
        c[i] = '\0';
        cout << a << endl << b << endl << c << endl;
    }
    return 0;
}                 
