#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  vector<tuple<int, int>> pairs(N);
  rep(i, N)
  {
    int a, b;
    cin >> a >> b;
    pairs[i] = make_tuple(b, a);
  }

  sort(pairs.begin(), pairs.end());

  rep(i, N)
  {
    int a, b;
    tie(b, a) = pairs[i];
    cout << a << ' ' << b << endl;
  }
}
