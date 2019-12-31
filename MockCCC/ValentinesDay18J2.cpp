#include <iostream>

using namespace std;

auto main () -> int
{
  int n, sum = 0, sum2 = 0, counter = 1;
  cin >> n;
  int x, y;
  cin >> x >> y;
  sum += x;
  // cout << sum << endl; 400
  while (sum < n)
  {
    x -= y;
    // cout << x << endl; 200
    sum += x; // 600
    ++counter;
    sum2 = sum;
    if (sum + sum2 > n)
    break;
    else if (x < 0)
    {
      counter = n + 1;
      break;
    }
  }
  if (counter > n)
  cout << "RIP" << endl;
  else
  cout << counter << endl;
}