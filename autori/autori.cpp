#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    cout << str[0];
    size_t found = str.find("-");
    if (found != string::npos)
        cout << str[found+1];
    while (1) {
        found = str.find("-", found+1);
        if (found == string::npos) {
            break;
        }
        cout << str[found+1];
    }
    return 0;
}

