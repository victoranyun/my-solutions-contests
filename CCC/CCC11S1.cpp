#include <iostream>
#include <string>
using namespace std;

int main () {
  int x;
  int tcounter = 0;
  int scounter = 0;
  cin >> x;
  string s;
  cin.ignore();
  for (int i = 0; i <= x; ++i){
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i){
      if (s[i] == 't' || s[i] == 'T'){
        ++tcounter;
      }
      if (s[i] == 's' || s[i] == 'S'){
        ++scounter;
      }
      
    }
    
  }
  if (tcounter > scounter){
        cout << "English" <<endl;
      }
      if (scounter > tcounter){
        cout << "French" <<endl;
      }
      if (tcounter == scounter){
        cout << "French" <<endl;
      }
  return 0;
}