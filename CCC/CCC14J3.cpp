#include <iostream>

using namespace std;

int main () {
  int rounds;
  cin >> rounds;
  int antonia = 100;
  int david = 100;
  for (int i = 0; i < rounds; ++i){
    int a, b;
    cin >> a >> b;
    if (a < b){
      antonia = antonia - b;
    }
    else if (b < a){
      david = david - a;
    }
    else{
      antonia = antonia + 0;
    }
    
  }
  cout << antonia << endl;
  cout << david << endl;
  return 0;
}