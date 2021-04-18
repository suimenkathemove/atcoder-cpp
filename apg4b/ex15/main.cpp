#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> inputVec(int N)
{
  vector<int> vec(N);
  rep(i, N)
  {
    cin >> vec[i];
  }
  return vec;
}

int sum(vector<int> vec)
{
  int sum = 0;
  rep(i, vec.size())
  {
    sum += vec[i];
  }
  return sum;
}

int main()
{
  int N;
  cin >> N;
  vector<int> A = inputVec(N);
  vector<int> B = inputVec(N);
  vector<int> C = inputVec(N);

  cout << sum(A) * sum(B) * sum(C) << endl;
}
