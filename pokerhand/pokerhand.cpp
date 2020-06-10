#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> card;
    int result = 0;
    for (int i=0; i<5; i++) {
        char rank, suit;
        cin >> rank >> suit;
        card[rank]++;
        result = max(result, card[rank]);
    }
    cout << result << endl;
    return 0;
}
