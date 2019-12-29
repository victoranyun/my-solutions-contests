#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a;
    cin >> b;
    int c = 0;
    for (int i = 1; i < 22; ++i){
        int n = i * i * i * i * i * i;
        if (n >= a && n <= b){
            ++c;
        }
    }
    cout << c;
}