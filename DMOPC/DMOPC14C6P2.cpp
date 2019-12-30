#include <iostream>

using namespace std;

int main () {
  int n, diff, max = 0;
  cin >> n;
  for (int i = 0; i < n; ++i){
    int a, b;
    cin >> a >> b;
    diff = abs(a-b);
 
    if (diff > max){
      max = diff;
    }
    
  }
  cout << max << endl;
  return 0;
}