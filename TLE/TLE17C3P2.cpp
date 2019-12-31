#include <iostream>
#include <algorithm>
using namespace std;
// int find(int arr[], int len, int seek)
// {
//     for (int i = 0; i < len; ++i)
//     {
//         if (arr[i] == seek) return i;
//     }
//     return -1;
// }
int sectors[100000] = {0};
int order[100000] = {0};
int main () {
  cin.tie(0);
  cin.sync_with_stdio(0);
  long long int s, k, temp, counter = 0;
  cin >> s >> k;
  for (int i = 0; i < s; ++i)
  {
    cin >> temp;
    sectors[i] = temp;
  }
  for (int i = 0; i < k; ++i)
  {
    cin >> temp;
    order[i] = temp;
  }
  int j = std::find(sectors, sectors+s, order[0]) - sectors;
  ++counter;
  // cout << j <<endl;
  int x;
  for (int i = 0; i < k; ++i){
    x = std::find(sectors, sectors+s, order[i]) - sectors;
    counter += abs(x-j);
    j = x;
  }
  cout << counter << endl;
}