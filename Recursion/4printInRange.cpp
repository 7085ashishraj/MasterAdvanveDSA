#include <bits/stdc++.h>
using namespace std;

void printRange(int a, int b) {
    if(a>b) return;
    cout<<a<<" ";
    printRange(a+1, b);
    
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int start, end;
    cin >> start >> end;
    printRange(start, end);
    return 0;
}