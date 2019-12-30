#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  vector <double> base;
  vector <double> top;
  string s1;
  cin >> s1;
  for (int i = 0; i < 3; ++i)
  {
      double temp;
      cin >> temp;
      base.push_back(temp);
  }
  for (int i = 0; i < 3; ++i)
  {
      double temp;
      cin >> temp;
      top.push_back(temp);
  }
  if (s1 == "Multiply")
  {
    for (int i = 0; i < 3; ++i)
      cout << fixed << setprecision(7) << (base[i])*(top[i]) << " ";
  }
  if (s1 == "Screen")
  {
    for (int i = 0; i < 3; ++i)
      cout << fixed << setprecision(7) << 1 - ((1 - base[i])*(1 - top[i])) << " ";
  }
  if (s1 == "Overlay")
  {
    for (int i = 0; i < 3; ++i)
    {
      if (base[i] < 0.5)
        cout << fixed << setprecision(7) << 2*base[i]*top[i] << " ";
      else
        cout << fixed << setprecision(7) << 1 - (2*((1 - base[i])*(1 - top[i]))) << " ";
    }
  }
}