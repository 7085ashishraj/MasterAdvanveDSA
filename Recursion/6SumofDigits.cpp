#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    if(n==0) return 0;
    int last_d = n % 10;
    int remaining_d = n/10;
    
    return last_d + sumOfDigit(remaining_d);

    
}
int main()
{
    int num;
    cin>>num;
    int result = sumOfDigit(num);
    cout <<result << endl;
    return 0;
}