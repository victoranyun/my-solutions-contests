#include <stdio.h>
#include <iostream>
using namespace std;
int main () {
    int n;
    int temp;
    int counter = 0;
    cin >> n;
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i){
        cin >> temp;
        if (temp >= n)
            ++counter;
    }
    cout << counter << endl;
}