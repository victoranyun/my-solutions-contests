#include<bits/stdc++.h>
using namespace std;

int array[100000];
int k;
int main () {
  int x0, y0;
  int x1, y1;
  cin >> x0 >> y0;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i){
    cin >> x1 >> y1;
    if (i == 0)
    {
      k = abs((y0-y1)) + abs((x0-x1));
    }
    if (abs((y0-y1)) + abs((x0-x1)) > k && i != 0)
    {
      k = abs((y0-y1)) + abs((x0-x1));
    }
  }
  cout << k * k * 2 << endl;
}