#include <bits/stdc++.h>
using namespace std;

int highestPowerof2(unsigned int n) { 
    // Invalid input 
    if (n < 1) 
        return 0; 
  
    int res = 1; 
  
    // Try all powers starting from 2^1 
    for (int i=0; i<8*sizeof(unsigned int); i++) 
    { 
        int curr = 1 << i; 
  
        // If current power is more than n, break 
        if (curr > n) 
           break; 
  
        res = curr; 
    } 
  
    return res; 
}

int main() {
    int n = 10;
    cout << highestPowerof2(n) << endl;
    return 0;
}
