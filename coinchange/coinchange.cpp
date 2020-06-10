#include <bits/stdc++.h>
using namespace std;

int coin[5] = {1, 5, 10, 20, 25};
int memo[5][7500];

int coinChange(int type, int value) {
    if (value == 0)
        return 1;
    if (value < 0 || type == 5)
        return 0;
    if (memo[type][value] != -1)
        return memo[type][value];

    int ans = coinChange(type+1, value) + coinChange(type, value-coin[type]);
    return memo[type][value] = ans;
}

int main() {
    int t;
    memset(memo, -1, sizeof memo);
    scanf("%i", &t);
    for (int i=0; i<t; i++) {
        int n;
        scanf("%i", &n);
        printf("Case #%i: %i\n", i+1, coinChange(0, n));
    }
}
