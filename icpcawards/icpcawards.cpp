#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string univ, team;
    unordered_set<string> winner;
    cin >> n;
    while (n--) {
        cin >> univ >> team;
        if (winner.size() == 12)
            break;
        if (winner.find(univ) == winner.end()) {
            winner.insert(univ);
            cout << univ << " " << team << endl;
        }
    }
    return 0;
}

