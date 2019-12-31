#include <iostream>

using namespace std;
int main () {
  int n, power, sum = 0;
  cin >> n;
  cin >> power;
  power = power * (n - 1);
  for (int i = 0; i < n - 1; ++i){
    int x;
    cin >> x;
    sum = sum + x;
  }
  if (sum >= power){
    cout << "NO" <<endl;

    }
    else if (sum < power){
    cout << "YES" << endl;

    }
    
  
return 0;
}