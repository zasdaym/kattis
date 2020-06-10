#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> dict;
    map<string, string>::iterator itr;
    string line;
    while (getline(cin, line) && line != "") {
        string s1, s2;
        stringstream ss(line);
        ss >> s1 >> s2;
        dict[s2] = s1;
    }

    while (getline(cin, line) && line != "") {
        itr = dict.find(line);
        if (itr == dict.end())
            printf("eh\n");
        else
            printf("%s\n", itr->second.c_str());
    }
    return 0;
}
