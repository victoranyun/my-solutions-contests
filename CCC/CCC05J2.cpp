#include <iostream>
using namespace std;

int main () {
  int start, end, counter = 0, rsacounter = 0;
  cin >> start;
  cin >> end;
  for (int i = start; i <= end; ++i){
    for (int k = 1; k <= i; ++k){
      if (i % k == 0)
      ++counter;
    }
    if (counter == 4)
    ++rsacounter;
    
    counter = 0;
  }
  cout << "The number of RSA numbers between " << start << " " << "and " << end << " is " <<  rsacounter << endl;
  return 0;
}