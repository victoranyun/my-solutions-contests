#include <iostream>
#include <string>
using namespace std;

int main () {
  string original;
  getline(cin, original);
  int between = original.find(" ") - 2;
  int counter = 0;
  for (int i = 2; i <= between; ++i){
    if (original.substr(i, 1) == "a")
      cout << "(car ";
    else if (original.substr(i, 1) == "d")
      cout << "(cdr ";
    ++counter;
  }
  cout << "x";
  for (int i = 0; i < counter; ++i)
  cout << ")";
  return 0;
}