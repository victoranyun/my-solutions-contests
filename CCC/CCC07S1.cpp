#include <iostream>

using namespace std;

int main () {
  int n;
  cin >> n;
  int today = (2007 * 365) + (2 * 30) + 27;
  for (int i = 0; i < n; ++i){
    int y, m, d;
    cin >> y >> m >> d;
    int days = (y * 365) + (m * 30) + d;
    int difference = today - days;
    if (difference/365 >= 18){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  
  
  
  return 0;
}