#include <iostream>
#include <vector>

using namespace std;
int a[10000];

int DFS(int s, int n)
{
    int c = s;
    for(int i = 0;; ++i)
    {
        if (a[c] == n)
            return i;
        else if (a[c] == s || a[c] == 0)
            return -1;
        else
            c = a[c];
    }
}

int main()
{
    int s, e, N;
    cin >> N;
    while(N--){
        cin >> s >> e;
        a[s] = e;
    }
    while(1)
    {
        cin >> s >> e;
        if (s == 0 && e == 0)
            break;
        s = DFS(s,e);
        if(s != -1)
            cout << "Yes " << s << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}