#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i, len;
    bool found = false;
    cin >> s;
    len = s.length();
    for (i=0; i<len-1; i++) {
        if (s[i] == s[i+1] && s[i] == 's') {
            found = true;
        }
    }
    if (found == true) {
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }
    return 0;
}

