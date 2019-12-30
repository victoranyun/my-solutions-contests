#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  long long int n, m;
  vector <long long int> cute;
  vector <long long int> counterarr;
  cin >> n >> m;
  
  for (long long int i = 0; i < n; ++i)
  {
    long long int temp;
    cin >> temp;
    cute.push_back(temp);
  }
  for (long long int i = 0; i < n; ++i)
  {
    long long int sum = 0;
    long long int counter = 0;
    for (long long int j = i; j < n; ++j)
    {
      sum += cute[j];
      if (sum < m)
      {
        ++counter;
      }
      else
        break;
    }
    counterarr.push_back(counter);
  }

  // for (int i = 0; i < counterarr.size(); ++i)
  //   cout << counterarr[i] << " ";

  long long int max = *max_element(counterarr.begin(), counterarr.end());
  cout << max << endl;
}