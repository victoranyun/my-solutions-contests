#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int n, t, traits, prod = 1;
    cin >> n;
    int traitsarr[n] = {0};
    for (int i = 0; i < n; ++i)
    {
        prod = 1;
        cin >> t;
        for (int j = 0; j < t; ++j)
        {
            cin >> traits;
            prod *= traits;
        }
        traitsarr[i] = prod;
    }
    int arr2[n];
    for (int i = 0; i < n; ++i){
      arr2[i] = traitsarr[i];
    }
    sort(traitsarr, traitsarr+n);
    int final[3] = {0};
    for (int i = 0; i < n; ++i){
      if (arr2[i] == traitsarr[n-3])
      final[0] = i+1;
      else if (arr2[i] == traitsarr[n-2])
      final[1] = i+1;
      else if (arr2[i] == traitsarr[n-1])
      final[2] = i+1;
    }
    for (int i = 2; i >= 0; --i){
      cout << final[i]<<endl;
    }
    return 0;
}