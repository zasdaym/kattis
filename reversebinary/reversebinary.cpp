#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    while (n > 0) {
        result <<= 1;
        if (n & 1 == 1)
            result ^= 1;
        n >>= 1;
    }
    return result;
}

int main() {
    unsigned int n;
    cin >> n;
    cout << reverseBits(n) << endl;
    return 0;
}
