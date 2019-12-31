#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  long double x, y;
  cin >> x >> y;
  cout << fixed << setprecision(1) << (x/2)*y*1.0  << endl;
}