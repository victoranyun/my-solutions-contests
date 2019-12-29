#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    int longest = 1;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    if(t == s) {
        cout<<s.size()<<endl;
        return 0;
    }
    for (int l = s.size() - 1; l > 1; l--){
        for (int i = 0; i + l <= s.size(); i++) {
            string temp = s.substr(i, l);
            t = temp;
            reverse(t.begin(), t.end());
            if(temp == t)
                longest = max(longest, l);
        }
    }
    cout << longest << endl;
}