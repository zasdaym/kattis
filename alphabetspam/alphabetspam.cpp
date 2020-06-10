#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    double answer[4] = {};
    string s;
    cin >> s;
    n = s.length();
    for (int i=0; i<n; i++) {
        if (s[i] == '_')
            answer[0]++;
        else if (islower(s[i]))
            answer[1]++;
        else if (isupper(s[i]))
            answer[2]++;
        else
            answer[3]++;
    }
    printf("%f\n%f\n%f\n%f\n", answer[0]/n, answer[1]/n, answer[2]/n, answer[3]/n);
    return 0;
}

