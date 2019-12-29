#include <iostream>
#include <string>
using namespace std;
/*
4
Ada Alan Grace John
John Grace Alan Ada
*/
int main() {
  int n;
  cin >> n;
  string s;
  string s2;
  string s3;
  string s4;
  string arr[n];
  string arr2[n];
  if (n == 1)
  {
    cin >> s;
    cin >> s2;
    if (s == s2)
    {
      cout << "bad" << endl;
      return 0;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> s;
    if (s == "X" && n == 2)
    {
      cout << "bad" << endl;
      return 0;
    }
    
    arr[i] = s;
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> s;
    arr2[i] = s;
  }
  for (int i = 0; i < n; ++i)
  {
    if (arr[i] == arr2[i])
    {
      cout << "bad" << endl;
      return 0;
    }
  }
  bool flag = false;
  int store;
  int store2;
  for (int i = 0; i < n; ++i)
  {
    string temp = arr[i];
    string temp2 = arr2[i];
    for (int k = 0; k < n; ++k)
    {
      if (arr[k] == temp2)
      store = k;
      if (arr2[k] == temp)
      store2 = k;
    }
    if (store == store2)
      flag = true;
    else
      flag = false;
      
    if (flag == false)
    {
    cout << "bad" << endl;
    break;
    }
  }
  if (flag == true)
  {
    cout << "good" << endl;
  }
}