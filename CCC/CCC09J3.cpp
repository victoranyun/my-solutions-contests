#include <iostream>

using namespace std;

int main()
{
    int time;
    cin >> time;
    cout << time << " in Ottawa" <<endl;
    if (time - 300 < 0) 
        cout << 2100 + time << " in Victoria" <<endl;
    else 
        cout << time-300 << " in Victoria" <<endl;
    if (time - 200 < 0) 
        cout << 2200 + time <<" in Edmonton" <<endl;
    else 
        cout << time - 200 << " in Edmonton" <<endl;
    if (time - 100 < 0) 
        cout << 2300 + time <<" in Winnipeg" <<endl;
    else 
        cout << time - 100 << " in Winnipeg" <<endl;
    cout << time << " in Toronto" <<endl;
    if (time + 100 > 2400) 
        cout << -2300 + time <<" in Halifax" <<endl;
    else 
        cout << time + 100 <<" in Halifax" <<endl;
    if (time + 130 > 2400)
    {
        if (((-2270 + time) % 100) > 59)
            cout << -2230 + time << " in St. John's" <<endl;
        else 
            cout << -2270 + time << " in St. John's" <<endl;
    }
    else
    {
        if (((time + 130) % 100) >59) 
            cout << time + 170 << " in St. John's" <<endl;
        else 
            cout << time + 130 << " in St. John's" <<endl;
    }
    return 0;
}