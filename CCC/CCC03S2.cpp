#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;

string s1;
int main () {
  string store1, store2, store3, store4;
  cin >> n;
  cin.ignore();
  string vowels = "aeiou";
  for (int i = 0; i < n * 4; ++i){
    string firstword, syllable = "";
    
    int blank;
    
    getline(cin, s1);
    blank = s1.find(" ");
  
    while (blank > 0) {
      firstword = s1.substr(0, blank);
      s1 = s1.substr(blank + 1, s1.length()-blank - 1);
      blank = s1.find(" ");
    }
    
    for (int k = s1.length()-1; k >= 0; --k){

      if (s1[k] == 'o' || s1[k] == 'a' || s1[k] == 'e' || s1[k] == 'i' || s1[k] == 'u'){
      syllable = s1.substr(k, s1.length());
      break;
      }
      
    }
    if (i == 0 || i == 4 || i == 8 || i == 12 || i == 16)
    store1 = syllable;
    if (i == 1 || i == 5 || i == 9 || i == 13 || i == 17)
    store2 = syllable;
    if (i == 2 || i == 6 || i == 10 || i == 14 || i == 18)
    store3 = syllable;
    if (i == 3 || i == 7 || i == 11 || i == 15 || i == 19)
    store4 = syllable;
    
    if (store1 == store2 && store2 == store3 && store3 == store4 && store1 == store4 && store1 == store3 && store2 == store3)
    cout << "perfect" <<endl;
    else if (store1 == store2 && store3 == store4 && i >= 3)
    cout << "even" << endl;
    else if (store1 == store3 && store2 == store4)
    cout << "cross" <<endl;
    else if (store1 == store4 && store2 == store3)
    cout << "shell" <<endl;
    else if (i > 6)
    cout << "free" <<endl;
    
  }
 
}