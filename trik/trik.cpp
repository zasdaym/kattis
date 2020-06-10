#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int cup[3] = {1, 0, 0};
    string move;
    cin >> move;
    for (int i=0; i<move.length(); i++) {
        switch(move[i]) {
            case 'A':
                swap(&cup[0], &cup[1]);
                break;
            case 'B':
                swap(&cup[1], &cup[2]);
                break;
            case 'C':
                swap(&cup[0], &cup[2]);
                break;
        }
    }
    for (int i=0; i<3; i++) {
        if (cup[i] == 1)
            cout << i+1 << endl;
    }
    return 0;
}
