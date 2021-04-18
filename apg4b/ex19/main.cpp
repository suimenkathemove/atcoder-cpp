#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void mark(vector<vector<int>> &A, int &correct_count, int &wrong_count)
{
  rep(i, 9)
  {
    rep(j, 9)
    {
      int ans = (i + 1) * (j + 1);

      if (A[i][j] == ans)
      {
        correct_count++;
      }
      else
      {
        A[i][j] = ans;
        wrong_count++;
      }
    }
  }
}

int main()
{
  vector<vector<int>> A(9, vector<int>(9));
  rep(i, 9)
  {
    rep(j, 9)
    {
      cin >> A[i][j];
    }
  }

  int correct_count = 0;
  int wrong_count = 0;

  mark(A, correct_count, wrong_count);

  rep(i, 9)
  {
    string str = "";

    rep(j, 9)
    {
      str += to_string(A[i][j]);
      if (j != 9 - 1)
      {
        str += " ";
      }
    }

    cout << str << endl;
  }

  cout << correct_count << endl;
  cout << wrong_count << endl;
}
