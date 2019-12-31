#include <iostream>
#include <set>

using namespace std;
int arr[300000];
int temp;
int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        arr[i] = temp;
    }
    set<int> sa(arr, arr + n);
    cout << sa.size() << std::endl;
}