#include <iostream>
#include <string>

using namespace std;

int main () {
  int start, end;
  cin >> start;
  cin >> end;
  string s1[start];
  string s2[end];
  
  for (int i = 0; i < start; ++i){
    cin >> s1[i];
  }
  for (int i = 0; i < end; ++i){
    cin >> s2[i];
  }

  for (int i = 0; i < start; ++i){
    for (int k = 0; k < end; ++k){
      cout << s1[i] << " as " << s2[k] << endl;
    }
  }
  return 0;
}