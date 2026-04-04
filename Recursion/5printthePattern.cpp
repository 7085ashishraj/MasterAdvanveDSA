#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void helper(int curr, int n){
        if(curr > n) return;
        for(int j=1;j<=curr;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        helper(curr+1,n);
    }
    void solve(int n)
    {
        // Your code here
        helper(1,n);
    }
};


int main()
{
       int n;
       cin>>n;
        Solution ob;
        ob.solve(n);
    
    return 0; 
}

