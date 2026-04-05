#include <bits/stdc++.h>
using namespace std;

long power(long base, int exponent) {
   //write your code here 
   if(exponent == 0) return 1;
   return base * power(base, exponent-1);
}

int main() {
    long base;
    int exponent;
    cin >> base >> exponent;
    cout << power(base, exponent) << endl;
    return 0;
}