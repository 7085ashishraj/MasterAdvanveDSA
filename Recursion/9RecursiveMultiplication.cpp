#include <bits/stdc++.h>

using namespace std;
  
  void multiplyRecursivelyHelper(int n, int m, int &result) {
    if (m == 0) return;
    result += n;
    multiplyRecursivelyHelper(n, m - 1, result);
  }

  void multiplyRecursively(int n, int m) {
    int result = 0;
    multiplyRecursivelyHelper(n, m, result);
    cout << result;
  }

int main()
{
  int n,m;
  cin>>n>>m;
  multiplyRecursively(n,m);
  return 0;
}