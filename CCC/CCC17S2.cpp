#include <iostream>
#include <algorithm>
using namespace std;

long long int tides;
int main () {
  int n;
  cin >> n;
  long long int arr[n] = {0};
  long long int final[n] = {0};
  for (int i = 0; i < n; ++i){
    cin >> tides;
    arr[i] = tides;
  }
  sort(arr, arr + n);
  // for (int i = 0; i < n; ++i)
  // cout << arr[i] << " ";
  if (n % 2 == 0){
  int j = n/2;
  for (int i = 1; i < n; i+=2){
    final[i] = arr[j];
    ++j;
  }
  int k = (n/2)-1;
  for (int i = 0; i < n; i+=2){
    final[i] = arr[k];
    --k;
  }
  }
  else if (n % 2 != 0){
    int j = (n/2) + 1;
    for (int i = 1; i < n; i+=2){
    final[i] = arr[j];
    ++j;
  }
  int k = (n/2);
  for (int i = 0; i < n; i+=2){
    final[i] = arr[k];
    --k;
  }
  }
  for (int i = 0; i < n; ++i){
    cout << final[i] << " ";
  }
}