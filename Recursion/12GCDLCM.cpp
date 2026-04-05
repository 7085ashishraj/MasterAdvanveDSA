#include <iostream>
using namespace std;

int calculateGCD(int num1, int num2) {
    //write your code here 
    if (num2==0) return num1;
    return calculateGCD(num2, num1%num2);
}

int calculateLCM(int num1, int num2, int gcd) {
    //write your code here 
   
    return(num1 * num2)/gcd;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int gcd = calculateGCD(n1, n2);
    int lcm = calculateLCM(n1, n2, gcd);

    cout << gcd << endl;
    cout << lcm << endl;

    return 0;
}