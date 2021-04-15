#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N)
  {
    cin >> A[i];
  }

  int sum = 0;
  rep(i, N)
  {
    sum += A[i];
  }

  int average = sum / N;

  rep(i, N)
  {
    cout << abs(average - A[i]) << endl;
  }
}
