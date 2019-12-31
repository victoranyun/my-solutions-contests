#include <iostream>
using namespace std;
int main() {
  int n;
  int counter = 0;
  cin >> n;
  float hold = 0;
  float arr[n];
  for (int i = 0; i < n; ++i)
  {
    float temp;
    cin >> temp;
    arr[i] = temp;
    if (temp > hold)
    hold = temp;
  }
  for (int i = 0; i < n; ++i)
  {
    if (arr[i]/1000 > 10)
    ++counter;
  }
  if (hold/1000 > 10)
  cout << "Something is wrong with these cuteness values" << endl;
  else if (hold/1000 > 1 && counter == 0)
  cout << "Cuteness by definition is similarity to Cactus" << endl;
  else
  cout << "Cuteness by definition is similarity to Carol" << endl;
  return 0;
}