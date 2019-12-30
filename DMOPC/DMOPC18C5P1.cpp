#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  long long int n, m, k;
  cin >> n >> m >> k;
  vector<long long int> binn;
  vector<long long int> binm;
  int blue = 0, purple = 0;
  while (n > 0) 
  {  
    binn.push_back(n % 2); 
    n = n / 2; 
  } 
  while (m > 0) 
  {  
    binm.push_back(m % 2); 
    m = m / 2; 
  }
  // for (int i = 0; i < binn.size(); ++i)
  // {
  //   cout << binn[i] << " ";
  // }
  // cout << endl;
  // for (int i = 0; i < binm.size(); ++i)
  // {
  //   cout << binm[i] << " ";
  // }
  // cout << endl;
  for (int i = 0; i < k; ++i)
  {
    if (binn[i] != binm[i] && (binn[i] == 1 || binm[i] == 1))
      ++blue;
    else
      ++purple;
  }
   cout << blue << " " << purple << endl;
}