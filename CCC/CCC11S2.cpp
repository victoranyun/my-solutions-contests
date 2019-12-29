#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
  vector <string> ans;
  vector <string> key;
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i)
  {
    string s;
    cin >> s;
    ans.push_back(s);
  }
  for (int i = 0; i < N; ++i)
  {
    string s;
    cin >> s;
    key.push_back(s);
  }
  int counter = 0;
  for (int i = 0; i < N; ++i)
  {
    if (ans[i] == key[i])
      ++counter;
  }
  cout << counter << endl;
}