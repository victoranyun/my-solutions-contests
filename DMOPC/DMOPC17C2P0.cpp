#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double x1, y1, x2, y2, xs, ys, d, d1, d2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> xs >> ys;
  cin >> d;
  d1 = sqrt((x1 - xs)*(x1 - xs) + (y1 - ys)*(y1 - ys));
  d2 = sqrt((x2 - xs)*(x2 - xs) + (y2 - ys)*(y2 - ys));
  if (d1 <= d || d2 <= d)
  cout << "Yes"<<endl;
  else
  cout << "No" << endl;
}