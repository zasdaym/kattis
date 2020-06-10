#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "P=NP")
            cout << "skipped" << endl;
        else {
            auto pos = s.find("+");
            int a = stoi(s.substr(0, pos));
            int b = stoi(s.substr(pos));
            cout << a + b << endl;
        }
    }
}
