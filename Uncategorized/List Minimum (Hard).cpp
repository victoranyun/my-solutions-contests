#include <iostream>
#include <algorithm>
#include <functional>
#include <array>

using namespace std;
void mySort(int a[], unsigned n)
{
    std::sort(a, a+n);
}
int main () {
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; ++i){
        int k;
        cin >> k;
        arr[i] = k;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i){
    cout << arr[i] << endl;
    }
    return 0;
}