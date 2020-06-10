#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, s, c, money;
    string cards;
    cin >> g >> s >> c;
    money = (3*g) + (2*s) + c;

    if (money >= 8)
        cards = "Province or Gold";
    else if (money >= 6)
        cards = "Duchy or Gold";
    else if (money >= 5)
        cards = "Duchy or Silver";
    else if (money >= 3)
        cards = "Estate or Silver";
    else if (money >= 2)
        cards = "Estate or Copper";
    else
        cards = "Copper";

    cout << cards << endl;
    return 0;
}
