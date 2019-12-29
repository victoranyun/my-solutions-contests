include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
  vector <int> arabic;
  vector <char> roman;
  vector <int> conv;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i+=2)
  {
    arabic.push_back((s[i]-48));
  }
  for (int i = 1; i <= s.length(); i+=2)
  {
    char temp = s[i];
    roman.push_back(temp);
  }
  int total = 0;
  for (int i = 0; i < s.length()/2; ++i)
  {
    if (roman[i] == 'I')
      conv.push_back(1);
    if (roman[i] == 'V')
      conv.push_back(5);
    if (roman[i] == 'X')
      conv.push_back(10);
    if (roman[i] == 'L')
      conv.push_back(50);
    if (roman[i] == 'C')
      conv.push_back(100);
    if (roman[i] == 'D')
      conv.push_back(500);
    if (roman[i] == 'M')
      conv.push_back(1000);
  }

  for (int i = 1; i <= s.length()/2; ++i)
  {
    if (conv[i] > conv[i-1])
      conv[i-1] *= -1;
  }
  
  for (int i = 0; i < s.length()/2; ++i)
  {
    total += conv[i] * arabic[i];
  }
  cout << total << endl;
}