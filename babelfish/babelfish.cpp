#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, string> dict;
    string s1, s2;
    while (getline(cin, s1) && s1 != "") {
        stringstream ss(s1);
        ss >> s1 >> s2;
        dict[s2] = s1;
    }

    while (cin >> s1) {
        auto found = dict.find(s1);

        if (found != dict.end()) {
            cout << found->second << "\n";
        } else {
            cout << "eh\n";
        }
    }
    return 0;
}
