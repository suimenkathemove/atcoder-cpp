#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;

  string str_N = to_string(N);

  while (str_N.size() > 1 && str_N[str_N.size() - 1] == '0')
  {
    str_N = str_N.substr(0, str_N.size() - 1);
  }

  string reversed_str_N(str_N.rbegin(), str_N.rend());

  if (str_N == reversed_str_N)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
