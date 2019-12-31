#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <cmath>


using namespace std;

 int main() {

    cin.sync_with_stdio(0);
    cin.tie(0);
 
    ifstream in("DATA41.txt");//make sure to rename
    for (int k = 0; k < 10; ++k)
    {
    int n, r, s;
    in >> n >> r >> s;
    int q;
    for (int i = 0; i < n; ++i)
    {
        in >> q;
    }
    cout << (n * r) + s << endl;
    }
}

