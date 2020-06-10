#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    scanf("%d\n\n", &t);
    while (t--) {
        map<string, int> m;
        map<string, int>::iterator itr;
        string str;
        float sum = 0;

        while ((getline(cin, str)) && str != "") {
            if (m.find(str) == m.end())
                m.insert({str, 1});
            else {
                itr = m.find(str);
                itr->second++;
            }
            sum++;
        }
        for (itr = m.begin(); itr != m.end(); itr++) {
            printf("%s %f\n", itr->first.c_str(), itr->second / sum * 100);
        }
        printf("\n");
    }
    return 0;
}
