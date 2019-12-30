#include <iostream>
#include <algorithm>
#include <functional>
#include <array>
#include <cmath>
#include <iomanip>
using namespace std;
void mySort(int a[], unsigned n)
{
    std::sort(a, a+n);
}
int main () {
  int n;
  cin >> n;
  int arr[n] = {0};
  for (int i = 0; i < n; ++i){
    int marks;
    cin >> marks;
    arr[i] = marks;
  }
  sort(arr, arr + n);
  
  if (n % 2 != 0){
    cout << arr[(n/2)] << endl;
  }
  else{
    double median = (arr[n/2] + arr[(n/2)-1])/2.0;
    double rounded = round(median);
    cout << rounded << endl;
  }
  return 0;
}