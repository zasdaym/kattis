#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    char text[250][250] = {};
    cin >> a >> b >> c >> d;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cin >> text[i][j];
        }
    }
    for (int i=0; i<a; i++) {
        for (int j=0; j<c; j++) {
            for (int k=0; text[i][k]; k++) {
                for (int l=0; l<d; l++) {
                    cout << text[i][k];
                }
            }
            cout << endl;
        }
    }
}
