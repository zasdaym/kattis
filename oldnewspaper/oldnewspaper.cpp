#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++) {
        string result = "ok";
        for (int j=0; j<5; j++) {
            int a;
            scanf("%d", &a);
            if (a > 7)
                result = "help me";
        }
        printf("Case #%d: %s\n", i+1, result.c_str());
    }
    return 0;
}
