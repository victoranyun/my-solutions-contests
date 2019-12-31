#include <iostream>
#include <string>
using namespace std;

int main () {
  string arr[5] = {"B", "T", "F", "L", "C"};
  string input;
  cin >> input;
  for (int i = 0; i < input.length(); ++i){
    if (input.substr(i, 1) == "B")
    arr[0] = "";
    
    if (input.substr(i, 1) == "T")
    arr[1] = "";
    
    if (input.substr(i, 1) == "F")
    arr[2] = "";
    
    if (input.substr(i, 1) == "L")
    arr[3] = "";
    
    if (input.substr(i, 1) == "C")
    arr[4] = "";
    
  }
if (arr[0] == "" && arr[1] == "" && arr[2] == "" && arr[3] == "" && arr[4] =="")
cout << "NO MISSING PARTS" << endl;
else{
for (int i = 0; i < 5; ++i){
  cout << arr[i] <<endl; 
}
}
  return 0;
}