#include <bits/stdc++.h>
using namespace std;

void printNumbersDescending(int M) {
    //write your code here
    if(M==0){
        return;
    }
    cout<<M<<" ";
    printNumbersDescending(M-1);




}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int number;
    cin >> number;
    printNumbersDescending(number);
    return 0;
}