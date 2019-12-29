#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> letter;
vector <string> bin;

int main() {
  int k;
  cin >> k;
  for (int i = 0; i < k; ++i)
  {
      string s1;
      string s2;
      cin >> s1 >> s2;
      letter.push_back(s1);
      bin.push_back(s2);
  }
  string decode;
  cin >> decode;
  int i = 0;
  int cut = 1;
  while (decode.length() > 0)
  {
    i = 0;
    while (decode.find(bin[i])!=0)
      ++i;
    cout << letter[i];
    decode = decode.substr(bin[i].length(), decode.length()-bin[i].length());
  }
}