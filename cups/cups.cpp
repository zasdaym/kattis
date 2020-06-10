#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector <pair <int, string>> cup;
    cin >> n;
    for (int i=0; i<n; i++) {
        string a, b, color;
        int r;
        cin >> a >> b;
        if (isdigit(a[0])) {
            r = stoi(a);
            r /= 2;
            color = b;
        } else {
            r = stoi(b);
            color = a;
        }
        cup.push_back(make_pair(r, color));
    }
    sort(cup.begin(), cup.end());
    for (int i=0; i<n; i++) {
        cout << cup[i].second << endl;
    }
    return 0;
}
