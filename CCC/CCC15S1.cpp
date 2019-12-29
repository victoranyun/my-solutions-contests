#include <iostream>
int sum = 0;
using namespace std;
int main () {
  int k;
  cin >> k;
  int num[100000];
  int j = 0;
  for (int i = 0; i < k; ++i){
    int number;
    cin >> number;
    if (number == 0){
      --j;
    }
    else{
    num[j] = number;
    ++j;
    }
  }
  for (int i = 0; i < j; ++i){
    sum += num[i];
  }
  cout << sum;
}