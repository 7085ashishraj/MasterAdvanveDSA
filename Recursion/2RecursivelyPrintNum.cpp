#include <bits/stdc++.h>
using namespace std;

void printUpToN(int max, int current) {
    //write your code here
    if(current > max){
        return;
    }
    cout<<current<<" ";
    printUpToN(max, current+1);
}

int main() {
    int number;
    cin >> number;
    
    printUpToN(number, 1);
    
    return 0;
}