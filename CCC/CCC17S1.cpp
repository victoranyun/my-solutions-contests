#include <iostream>
using namespace std;
  int N;
  int runs, sum1 = 0, sum2 = 0, counter=0;
int main () {

  cin >> N;
  int swifts[N] = {0};
  int semaphores[N] = {0};
  for (int i = 0; i < N; ++i){
    cin >> runs;
    swifts[i] = runs;
  }
  for (int i = 0; i < N; ++i){
    cin >> runs;
    semaphores[i] = runs;
  }
  for (int i = 0; i < N; ++i){
    sum1 += swifts[i];
    sum2 += semaphores[i];
    if (sum1 == sum2)
    counter = i+1;
    
  }
  cout << counter<<endl;
}
