#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int maxw, n;
    cin >> maxw;
    cin >> n;
    vector <int> onbridge;
    int buffer = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        onbridge.push_back(temp);
    }

    for (int i = 0; i < n; ++i)
    {
        if (i > 3)
        {
            buffer -= onbridge[i-4];
        }
        buffer += onbridge[i];
        if (buffer > maxw)
        {
            cout << i << endl;
            break;
        }
        if (i == n-1 && buffer <= maxw)
            cout << n << endl;
    }
    
    //cout << counter << endl;
}