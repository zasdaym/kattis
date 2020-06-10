#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    float sum = 0.0;
    string str;

    while (getline(cin, str) && str != "") {
        if (m.count(str) == 0)
            m[str] = 1;
        else
            m[str]++;
        sum++;
    }

    for (auto i : m) {
        printf("%s %.4f\n", i.first.c_str(), (i.second*(100.0/sum)));
    }

    return 0;
}
