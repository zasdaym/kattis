#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    unordered_set<string> cities;
    cin >> t;
    while (t--) {
        cities.clear();
        cin >> n;
        while (n--) {
            cin >> s;
            if (cities.find(s) == cities.end()) {
                cities.insert(s);
            }   
        }
        cout << cities.size() << endl;
    }
    return 0;
}

