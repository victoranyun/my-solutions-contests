#include <iostream>
#include <cmath>
using namespace std;

int main () {
  int hour, min, t = 0;
  char colon = ':';
  cin >> hour >> colon >> min;
  for(int i = 1; i > 0; ++i){
    ++min;
    ++t;
    if (((hour >= 15) && (hour < 19)) || ((hour >= 7) && (hour < 10)))
      ++min;
    if (min >= 60)
      ++hour;
    hour = hour % 24;
    min = min % 60;
    if (t == 120)
      break;
  }
    if (hour < 10)
      cout << "0";
    cout << hour << colon << min;
    if (min < 10)
      cout << "0"<<endl;
  return 0;
}