#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N)
  {
    cin >> A[i];
  }
  rep(i, N)
  {
    cin >> B[i];
  }

  int a = 1;
  int b = 1000;

  rep(i, N)
  {
    if (A[i] > a)
    {
      a = A[i];
    }
    if (B[i] < b)
    {
      b = B[i];
    }
  }

  if (b < a)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << b - a + 1 << endl;
  }
}
