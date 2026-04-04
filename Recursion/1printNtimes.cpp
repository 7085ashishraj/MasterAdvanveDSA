#include <bits/stdc++.h>
using namespace std;

void printWord(int k) {
  //write your code
  if(k==0){
      return;
  }
  cout<<"AlgoTutor"<<endl;
  printWord(k-1);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int number;
    cin >> number;
    printWord(number);

    return 0;
}