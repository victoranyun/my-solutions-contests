#include <iostream>

using namespace std;
int marks, sum = 0;
int main () {
  int I, S;
  cin >> I;
  for (int i = 0; i < I; ++i){
    cin >> marks;
    sum += marks;
  }
  cin >> S;
  double counter = I+1;
  for (int i = 0; i < S; ++i){
    cin >> marks;
    double average = (sum + marks) / counter;
    cout << average << "\n";
    sum+= marks;
    ++counter;
  }
  return 0;
}