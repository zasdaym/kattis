#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int domval[] = { 11, 4, 3, 20, 10, 14, 0, 0 };
    unsigned int notval[] = { 11, 4, 3, 2, 10, 0, 0, 0 };
    unsigned int n, max, score;
    char suit;
    score = 0;
    cin >> n >> suit;
    max = 4 * n;
    for (int i=0; i<max; i++) {
        char a, b;
        cin >> a >> b;
        if (b == suit) {
            switch(a) {
                case 'A':
                    score += domval[0];
                    break;
                case 'K':
                    score += domval[1];
                    break;
                case 'Q':
                    score += domval[2];
                    break;
                case 'J':
                    score += domval[3];
                    break;
                case 'T':
                    score += domval[4];
                    break;
                case '9':
                    score += domval[5];
                    break;
                case '8':
                    score += domval[6];
                    break;
                case '7':
                    score += domval[7];
                    break;
            }
        } else {
            switch(a) {
                case 'A':
                    score += notval[0];
                    break;
                case 'K':
                    score += notval[1];
                    break;
                case 'Q':
                    score += notval[2];
                    break;
                case 'J':
                    score += notval[3];
                    break;
                case 'T':
                    score += notval[4];
                    break;
                case '9':
                    score += notval[5];
                    break;
                case '8':
                    score += notval[6];
                    break;
                case '7':
                    score += notval[7];
                    break;
            }
        }
    }
    cout << score << endl;
    return 0;
}
