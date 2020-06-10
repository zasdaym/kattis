#include <bits/stdc++.h>
using namespace std;

int main() {
    int score;
    string result;
    string a = "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCA";
    string b = "BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
    string c = "CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAA";
    int adrian = 0;
    int bruno = 0;
    int goran = 0;
    int n;
    string answer;
    cin >> n;
    cin >> answer;
    for (int i=0; i<n; i++) {
        if (answer[i] == a[i])
            adrian++;
        if (answer[i] == b[i])
            bruno++;
        if (answer[i] == c[i])
            goran++;
    }

    map<string, int> m;
    m.insert({"Adrian", adrian});
    m.insert({"Bruno", bruno});
    m.insert({"Goran", goran});

    int max_score = max(adrian, bruno);
    max_score = max(max_score, goran);
    cout << max_score << '\n';
    for (auto i : m) {
        if (i.second == max_score)
            cout << i.first << '\n';
    }

    return 0;
}
