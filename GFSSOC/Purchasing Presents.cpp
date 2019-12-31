#include <iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  double c, price = 0, x;
  cin >> c;
  for (int i = 0; i < n; ++i){
    cin >> x;
    price = price + x;
  }
  if (c < price)
    cout << "Fardin's broke" <<endl;
  else if (c == price)
    cout << "0.00" << endl;
  else 
    cout << c - price << endl;
  return 0;
}