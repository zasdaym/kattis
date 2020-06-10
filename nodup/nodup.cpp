#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> checker;
    string s;
    string out = "yes";

    while (cin >> s) {
        checker[s]++;
        if(checker[s] > 1)
            out = "no";
    }
    cout << out << endl;
    return 0;
}
