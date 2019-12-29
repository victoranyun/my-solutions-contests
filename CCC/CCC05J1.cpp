#include <iostream>

using namespace std;

int main () {
  float daytime, evening, weekend;
  float acost = 0, bcost = 0;
  cin >> daytime;
  cin >> evening;
  cin >> weekend;
  if (daytime > 100){
    acost = acost + ((daytime - 100) * 0.25);
  }
  acost = acost + (0.15 * evening);
  acost = acost + (0.20 * weekend);
  cout << "Plan A costs " << acost << endl;
  if (daytime > 250){
    bcost = bcost + ((daytime - 250) * 0.45);
  }
  bcost = bcost + (0.35 * evening);
  bcost = bcost + (0.25 * weekend);
  cout << "Plan B costs " << bcost << endl;
  if (acost < bcost)
  cout << "Plan A is cheapest." << endl;
  else if (bcost < acost)
  cout << "Plan B is cheapest." << endl;
  else
  cout << "Plan A and B are the same price." << endl;
  return 0;
}