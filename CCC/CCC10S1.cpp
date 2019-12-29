#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
    int n;
    vector <string> name;
    vector <int> calc;
    cin >> n;
    if (n == 0)
        return 0;
    else
    {
    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        int r, c, s;
        name.push_back(temp);
        cin >> r >> c >> s;
        calc.push_back((2*r) + (3*c) + s);
    }
    
    int max1 = calc[0];
    int store1 = 0;
    int store2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (calc[i] > max1)
        {
            max1 = calc[i];
            store1 = i;
        }
    }
    calc[store1] = 0;
    int max2 = calc[0];
    for (int i = 0; i < n; ++i)
    {
        if (calc[i] > max2)
        {
            max2 = calc[i];
            store2 = i;
        }
    }

    if (store1 == store2)
    {
        cout << name[store1] << endl;
    }
    else if (max1 == max2)
    {
        if (string(name[store1]) > string(name[store2]))
        {
            cout << name[store2] << endl;
            cout << name[store1] << endl;
        }
        else
        {
            cout << name[store1] << endl;
            cout << name[store2] << endl;
        }
    }
    else
    {
        cout << name[store1] << endl;
        cout << name[store2] << endl;
    }
    }
}