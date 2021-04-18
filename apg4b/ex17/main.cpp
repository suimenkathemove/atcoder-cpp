#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  rep(i, N)
  {
    cin >> P[i];
  }

  int ans = 0;

  for (int a : A)
  {
    for (int p : P)
    {
      if (a + p == S)
      {
        ans++;
      }
    }
  }

  cout << ans << endl;
}
