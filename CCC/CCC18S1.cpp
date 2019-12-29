#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector <long double> arr;
  vector <long double> diff;
  for (int i = 0; i < n; ++i)
  {
    int l;
    cin >> l;
    arr.push_back(l);
  }
  sort(arr.begin(), arr.end());
  //  for (auto x: arr)
  //    cout << x << endl;
  for (int i = 1; i < n - 1; ++i)
  {
    diff.push_back( (arr[i+1] - arr[i]) / 2 + (arr[i] - arr[i - 1]) / 2 );
  }
  sort (diff.begin(), diff.end());
  // for (auto x: diff)
  //   cout << x << endl;
  cout << fixed << setprecision(1) <<  diff[0] << endl;
}