#include <iostream>

using namespace std;

int main (){
  int counter = 0;
  int n;
  cin >> n;
  while (n != 1){
    if (n % 2 != 0){
      n = n * 3 + 1;
      ++counter;
    }
    if (n % 2 == 0){
      n = n / 2;
      ++counter;
    }
  }
  cout << counter;
  return 0;
}