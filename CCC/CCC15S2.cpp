#include <iostream>
int j, a, index, counter = 0, conv;
char size, jersey;
using namespace std;

int main () {
  cin >> j;
  int array[j];
  cin >> a;
  for (int i = 0; i < j; ++i){
    cin >> jersey;
    if (jersey == 'S')
    conv = 1;
    else if (jersey == 'M')
    conv = 2;
    else if (jersey == 'L')
    conv = 3;
    array[i] = conv;
  }
  for (int i = 0; i < a; ++i){
    cin >> size >> index;
    if (size == 'S')
    conv = 1;
    else if (size == 'M')
    conv = 2;
    else if (size == 'L')
    conv = 3;
    if (array[index-1] >= conv){
    ++counter;
    array[index-1] = 0;
    }
  }
  cout << counter;
}