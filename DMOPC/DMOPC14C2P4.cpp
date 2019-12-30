#include <iostream>
#include <vector>

using namespace std;
int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  vector <long long int> mass;
  vector <long long int> sum;
  long long int n;
  cin >> n;
  for (long long int i = 0; i < n; ++i)
  {
    long long int temp;
    cin >> temp;
    mass.push_back(temp); // 1 2 3 4 5
  } 
  sum.push_back(mass[0]); // 1 3 6 10 15
  for (long long int i = 1; i <= n; ++i)
  {
    sum.push_back(mass[i] + sum[i-1]);
  }
  long long int q;
  cin >> q;
  for (long long int i = 0; i < q; ++i)
  {
    long long int a, b;
    cin >> a >> b; // 1 3
    cout << sum[b]-sum[a]+mass[a] << "\n";
  }
}