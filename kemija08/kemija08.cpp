#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    size_t pos = 0;
    while (s.find_first_of("aeiou", pos) != string::npos) {
        pos = s.find_first_of("aeiou", pos) + 1;
        s.erase(pos,2);
    }
    cout << s << endl;
    return 0;
}
