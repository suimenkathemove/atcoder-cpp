#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int A, B;
  cin >> A >> B;

  string a = "A:";
  string b = "B:";

  // rep
  // rep(_, A)
  // {
  //   a += "]";
  // }
  // rep(_, B)
  // {
  //   b += "]";
  // }

  // while
  int i = 0;
  while (i < A)
  {
    a += "]";
    i++;
  }
  int j = 0;
  while (j < B)
  {
    b += "]";
    j++;
  }

  cout << a << endl;
  cout << b << endl;
}
