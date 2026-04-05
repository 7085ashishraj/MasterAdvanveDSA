#include <bits/stdc++.h>
using namespace std;

long long int factorialRecursive(int n)
{
    // your code here
    if(n==0) return 1;
    return n * factorialRecursive(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorialRecursive(n) << endl;
    return 0;
}