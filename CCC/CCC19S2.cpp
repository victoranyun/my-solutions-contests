#include <iostream>
#include <cmath>
using namespace std;
bool prime = false;
bool isPrime(long long int n)
{
  if (n == 1)
    return false;
  long long int i = 2;
  while (i*i <= n)
  {
    if (n % i == 0)
      return false;
    ++i;
  }
  return true;
}
int main() {
  long long int t;
  cin >> t;
  for (long long int i = 0; i < t; ++i)
  {
    long long int n;
    cin >> n;
    bool flag = false;
    for (int j = n-1000; j <= n; ++j)
    {
      for (int k = n+1000; k >= n; --k)
      {
        if (j + k == 2*n && isPrime(j) == true && isPrime(k) == true && j > 0 && k > 0)
        {
          cout << j << " " << k << endl;
          flag = true;
          break;
        }
      }
      if (flag == true)
      break;
    }
  }
  
}