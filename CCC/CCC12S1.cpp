#include <iostream>

using namespace std;

int main () {
  int a;
  cin >> a;
  a = a - 1;
  int n = ( a * (a-1) * (a-2) ) / 6;
  cout << n <<endl;
  return 0;
}