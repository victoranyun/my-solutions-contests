#include <iostream>
#include <vector>
#include <algorithm>

  using namespace std;

  int main ()
  {
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int g, p;
    cin >> g;
    cin >> p;
    vector <bool> gates(g+1, true);
    long long int counter = 0;
    for (long long int i = 1; i <= p; ++i)
    {
      long long int temp;
      cin >> temp;
      bool penis=false;
      for (long long int j = g; j > 0; --j)
      {
        if (j <= temp && gates[j])
        {
          penis=true;
          gates[j] = false;
          ++counter;
          break;
        }
      }
      if(!penis)
      {
        break;
      }
    }
    cout << counter << "\n";
  }