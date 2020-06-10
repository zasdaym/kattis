#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        int hasil = digitSum(n);
        int p = 11;
        while (digitSum(n*p) != hasil) {
            p++;
        }
        cout << p << endl;
        //cout << hasil << endl;
    }
    return 0;
}
