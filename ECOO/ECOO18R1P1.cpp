#include <iostream>
using namespace std;

int main ()
{
    for (int k = 0; k < 10; ++k)
    {
        int t, n;
        cin >> t >> n;
        int counter = 0;
        for (int i = 0; i < n; ++i)
        {
            char c;
            cin >> c;
            if (c == 'B')
                counter += t;
            if (counter > 0)
                --counter;
            
        }
        cout << counter << endl;
    }
}