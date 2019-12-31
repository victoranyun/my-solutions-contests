#include <iostream>

using namespace std;

int main () {
  int n, a = 1, b = 1;
  cin >> n;
  for (int i = 0; i < n; ++i){
    if(a % 7 == 0 && a % 13 == 0)
      cout << "Fizz Fuzz ";
    else if (a % 7 == 0)
      cout << "Fizz ";
    else if (a % 13 == 0)
      cout << "Fuzz ";
    else 
      cout << a << " ";
    if (b % 7 == 0 && b % 13 == 0)
      cout << "Fizz Fuzz" <<endl;
    else if (b % 7 == 0)
      cout << "Fizz" <<endl;
    else if (b % 13 == 0)
      cout << "Fuzz" <<endl;
    else 
      cout << b << endl;
      
    ++a;
    b+=2;
  }
  return 0;
}