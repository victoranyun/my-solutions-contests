#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; ++i){
        int k;
        cin >> k;
        arr[i] = k;
    }
    for (int i = 0; i < n; ++i){
      for (int i = 0; i < n; ++i){
        if (arr[i] > arr[i+1])
        swap(arr[i], arr[i+1]);
      }
    }
    for (int i = 0; i < n; ++i){
    cout << arr[i] << endl;
    }
    return 0;
}