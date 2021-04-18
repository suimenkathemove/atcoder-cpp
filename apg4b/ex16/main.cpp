#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  vector<int> A(5);
  rep(i, 5)
  {
    cin >> A[i];
  }

  string ans = "NO";

  rep(i, A.size() - 1)
  {
    if (A[i] == A[i + 1])
    {
      ans = "YES";
    }
  }

  cout << ans << endl;
}
