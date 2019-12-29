#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        cout << "Is an anagram." << endl;
    else
        cout << "Is not an anagram." <<endl;
}