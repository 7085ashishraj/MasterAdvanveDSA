#include <bits/stdc++.h>
using namespace std;

long power(long base, int exponent) {
  //write your code here 
  if (exponent == 0) return 1;
  long half = power(base, exponent / 2);
  if(exponent % 2 == 0){
      return half * half;
  }else if(exponent > 0){
      return base * half * half;
  } else{
      return 1;
  }
}

int main() {
    long base;
    int exponent;
    cin >> base >> exponent;
    cout << power(base, exponent) << endl;
    
    return 0;
}