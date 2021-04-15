#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string S;
  cin >> S;

  int ans = 1;

  rep(i, S.size())
  {
    if (i % 2 != 0)
    {
      if (S[i] == '+')
      {
        ans++;
      }

      if (S[i] == '-')
      {
        ans--;
      }
    }
  }

  cout << ans << endl;
}
