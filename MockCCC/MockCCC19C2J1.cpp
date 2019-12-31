#include <iostream>

using namespace std;

int main () 
{
  string s;
  int counter = 0;
  for (int i = 0; i < 5; ++i)
  {
    cin >> s;
    if (s == "P")
      ++counter;
  }
  cout << counter << endl;
}