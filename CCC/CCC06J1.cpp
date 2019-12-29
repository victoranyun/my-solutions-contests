#include <iostream>

using namespace std;

int main () {
  int a, b, c, d;
  int sum = 0;
  
  cin >> a;
  
  cin >> b;
  
  cin >> c;
  
  cin >> d;
  
  switch(a){
    case 1:
    sum = sum + 461;
    break;
    case 2:
    sum = sum + 431;
    break;
    case 3:
    sum = sum + 420;
    break;
    case 4:
    sum = sum + 0;
    break;
  }
  
  switch(b){
    case 1:
    sum = sum + 100;
    break;
    case 2:
    sum = sum + 57;
    break;
    case 3:
    sum = sum + 70;
    break;
    case 4:
    sum = sum + 0;
    break;
  }
  
  switch(c){
    case 1:
    sum = sum + 130;
    break;
    case 2:
    sum = sum + 160;
    break;
    case 3:
    sum = sum + 118;
    break;
    case 4:
    sum = sum + 0;
    break;
  }
  
  switch(d){
    case 1:
    sum = sum + 167;
    break;
    case 2:
    sum = sum + 266;
    break;
    case 3:
    sum = sum + 75;
    break;
    case 4:
    sum = sum + 0;
    break;
  }
  cout << "Your total Calorie count is " << sum << "."<<endl;
  return 0;
}