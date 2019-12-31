#include <iostream>

using namespace std;
int k, unlucky, n, floors;
int main () {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin >> k;
  int arr[k];
  for (int i = k-1; i >=0; i = i - 1){
    cin >> unlucky;
    arr[i] = unlucky;
  }
  cin >> n;
  int arr2[n];
  int final[n];
  for (int i = n-1; i >=0; i = i - 1){
    cin >> floors;
    arr2[i] = floors;
    final[i] = floors;
  }
  for (int i = k-1; i >= 0; i = i - 1){
    for (int j = n-1; j >= 0; j = j - 1){
      if (arr[i] < arr2[j]){
        final[j] = final[j] - 1;
      }
    }
  }
  for (int i = n-1; i >= 0; i = i - 1)
  printf("%d\n", final[i]);
  

}