#include <bits/stdc++.h>
using namespace std;

long computeProduct(int k) {
   //write your code
   if(k==0) return 1;
   return k * computeProduct(k-1);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int number;
    cin >> number;
    cout << computeProduct(number) << endl;

    return 0;
}