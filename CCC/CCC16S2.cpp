#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
  int problem;
  cin >> problem;
  int n;
  cin >> n;
  vector <int> dmoj;
  vector <int> peg;
  vector <int> sums;
  for (int i = 0; i < n; ++i)
  {
    int temp;
    cin >> temp;
    dmoj.push_back(temp);
  }
  for (int i = 0; i < n; ++i)
  {
    int temp;
    cin >> temp;
    peg.push_back(temp);
  }
  sort(dmoj.begin(), dmoj.end());
  sort(peg.begin(), peg.end());
  if (problem == 1)
  {
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
      if (dmoj[i] >= peg[i])
        sum += dmoj[i];
      else
        sum += peg[i];
    }
    cout << sum << endl;
  }
  if (problem == 2)
  {
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
      if (dmoj[i] >= peg[n-i-1])
        sum += dmoj[i];
      else
        sum += peg[n-i-1];
    }
    cout << sum << endl;
  }
}