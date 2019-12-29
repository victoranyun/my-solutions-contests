#include <iostream>

using namespace std;

int main () {
  int n, b, sum= 0, avg, bank;
  cin >> n;
  int briefcases[10] = {100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
  for (int i = 1; i <= n; ++i){
    cin >> b;
    briefcases[b-1] = 0;
  }
  cin >> bank;
  for (int j = 0; j <= 9; ++j){
    sum = sum + briefcases[j];
  }
  avg = sum/(10-n);
  if (avg < bank){
    cout << "deal" <<endl;
  }
  else
    cout <<"no deal" <<endl;
  return 0;
}