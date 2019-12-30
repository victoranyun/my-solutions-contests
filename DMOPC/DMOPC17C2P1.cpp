#include <iostream>

using namespace std;
long long int n, ci, vi, sum = 0;
int main () {

  cin >> n;
  for (int i = 0; i < n; ++i){
    cin >> ci >> vi;
    if (vi <= 0)
    continue;
    else if (vi >= 1)
    sum += ci;
  }
  cout << sum;
}