#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    string str;
    while (getline(cin, str)) {
        int length = str.length();
        int size = sqrt(length);
        int x = 1;
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                printf("%c", str[(size*(j+1))-i-1]);
            }
        }
        printf("\n");
    }
    return 0;
}
