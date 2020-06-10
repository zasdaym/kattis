#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i, max, sum, bonus;
    int* min;
    int r[3] = {0, 0, 0};
    getline(cin, s);
    max = s.length();
    for (i=0; i<max; i++) {
        switch(s[i]) {
            case 'T':
                r[0]++;
                break;
            case 'C':
                r[1]++;
                break;
            case 'G':
                r[2]++;
                break;
        }
    }
    min = min_element(r, r+3);
    bonus = (*min * 7);
    sum = ( (r[0]*r[0]) + (r[1]*r[1]) + (r[2]*r[2]) + bonus);
    cout << sum << endl;
    return 0;
}
