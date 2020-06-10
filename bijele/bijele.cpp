#include <bits/stdc++.h>
using namespace std;

int main() {
    int pieces[] = { 1, 1, 2, 2, 2, 8 };
    int input[6];
    int i;

    cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

    for (i=0; i<6; i++) {
        cout << pieces[i] - input[i] << " ";
    }
    return 0;
}

