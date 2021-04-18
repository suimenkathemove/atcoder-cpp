#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<char>> table(N, vector<char>(N, '-'));

  rep(i, M)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;

    table[a][b] = 'o';
    table[b][a] = 'x';
  }

  rep(i, N)
  {
    string str = "";

    rep(j, N)
    {
      str += table[i][j];
      if (j != N - 1)
      {
        str += " ";
      }
    }

    cout << str << endl;
  }
}
