#include <iostream>

using namespace std;

int main () {
  int roomw, rooml, tile, space = 0;
  cin >> roomw >> rooml;
  cin >> tile;
  space = roomw / tile;
  if (rooml / tile > 0)
  space = space * (rooml / tile);
  cout << space << endl;
  return 0;
}