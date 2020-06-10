#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        string str;
        string result = "invalid";
        cin >> str;
        if (str.substr(0,5) == "*122*" && *str.rbegin() == '#' && str.substr(5, str.find('#')).length() == 9)
            result = "valid";
        printf("case#%d:%s\n", i+1, result.c_str());
    }
}
