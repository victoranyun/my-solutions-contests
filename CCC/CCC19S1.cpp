#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int hcounter = 0;
  int vcounter = 0;
  for (int i = 0; i < s.length()+1; ++i)
    {
      if (s.substr(i, 1) == "H")
        ++hcounter;
      if (s.substr(i, 1) == "V")
        ++vcounter;
    }
    // cout << hcounter << " " << vcounter << endl;
  if (hcounter % 2 != 0 && vcounter % 2 != 0)
  {
    cout << "4 3" << endl;
    cout << "2 1" << endl;
  }
  if (hcounter % 2 != 0 && vcounter % 2 == 0)
  {
    cout << "3 4" << endl;
    cout << "1 2" << endl;
  }
  if (hcounter % 2 == 0 && vcounter % 2 != 0)
  {
    cout << "2 1" << endl;
    cout << "4 3" << endl;
  }
  if (hcounter % 2== 0 && vcounter % 2 == 0)
  {
    cout << "1 2" << endl;
    cout << "3 4" << endl;
  }
}