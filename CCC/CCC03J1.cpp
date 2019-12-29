#include <iostream>
using namespace std;

int main (){
  int tine_length, tine_spacing, handle_length;
  cin >> tine_length;
  cin >> tine_spacing;
  cin >> handle_length;
  for (int i = 1; i <= tine_length; ++i){
    cout << "*";
    for (int j = 1; j <= tine_spacing; ++j){
      cout << " ";
    }
    cout << "*";
      for (int j = 1; j <= tine_spacing; ++j){
        cout << " ";
      }
    cout << "*"<<endl;
  }
  for (int k = 1; k <= 2 * tine_spacing + 3; ++k)
    cout << "*";
    cout << endl;
  for (int l = 1; l <= handle_length; ++l){
    for (int m = 1; m <= tine_spacing + 1; ++m){
      cout << " ";
    }
    cout << "*" <<endl;
  }
  return 0;
}