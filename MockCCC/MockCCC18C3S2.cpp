// #include <iostream>
// #include <string>
// #include <set>
// using namespace std;
// int main() {
//   int counter = 0;
//   std::string line;
//   getline(cin, line);
//   std::set<char> checker(line.begin(), line.end());
//   int number = line.size() - checker.size();
//   int checksize = checker.size();
//   if (number == 0)
//   {
//     cout << checksize - 2 << endl;
//   }
//   else if (checker.size() == 1 || checker.size() == 2)
//   {
//     cout << "0" <<endl;
//   }
//   else if (checker.size() > 2)
//   {
//     cout << checker.size() - 2 << endl;
//   }
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main () 
{
  int n;
  cin >> n;
  int arr[n];
  int medians[n];
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cin >> arr[j];
    }
    sort (arr, arr + n);
    medians[i] = arr[n/2];
  }
  sort (medians, medians + n);
  cout << medians[n/2] << endl;
  // for (int i = 0; i < n; ++i)
  // cout << medians[i] << "\t";
}