#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m)) {
        if (n == 0 && m == 0)
            break;
        vector<int> v;
        vector<int>::iterator itr;
        // Fill the vector
        for (int i=0; i<n; i++) {
            v.push_back(i+1);
        }
        int i=m+1;
        itr = v.begin();
        while (v.size() != 1) {
            // Back to beginning of vector
            if (itr == v.end()) {
                itr = v.begin();
            }

            // Select the trainee
            if (i%m == 0) {
                if (itr == v.begin()) {
                    //printf("%d ", *itr);
                    v.erase(itr);
                    itr = v.end();
                    itr--;
                } else {
                    //printf("%d ", *itr);
                    itr--;
                    v.erase(itr+1);
                }
            }
            itr++;
            i++;
        }
        printf("%d\n", *v.begin());
    }
}
