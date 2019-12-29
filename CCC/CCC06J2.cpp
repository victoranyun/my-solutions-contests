#include <iostream>

using namespace std;

int main () {
  int m, n;
  cin >> m;
  cin >> n;
  int counter = 0;
  for (int i = 1; i <= m; ++i){
    if (10-i <= n && 10-i > 0)
      ++counter;
  }
  if (counter==1)
    cout << "There is" << counter << " way to get the sum 10."<<endl;
    else
    cout << "There are" << counter << " ways to get the sum 10."<<endl;
  
  return 0;
  
}