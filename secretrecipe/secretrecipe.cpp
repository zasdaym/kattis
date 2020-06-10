#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        float x1, x2, x3, v1, v2;
        scanf("%f %f %f %f %f", &x1, &x2, &x3, &v1, &v2);
        float t1 = (x3-x1)/v1;
        float t2 = (x2-x3)/v2;
        if (t1 == t2)
            printf("Draw\n");
        else if (t1 > t2)
            printf("Kefa\n");
        else
            printf("Chef\n");
    }
    return 0;
}
