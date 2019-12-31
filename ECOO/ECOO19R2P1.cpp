#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <cmath>
#include <set>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n,c=0;
    ifstream in("DATA11.txt");//make sure to rename
    for (int k = 0; k < 10;++k)
    {
    string inputs, s="",s2="", s3 = "";
    in >> n;
    set<string> unique;
        unique.clear();

    for(int i=0; i < n;++i)
    {
        s="";
        s2=""; 
        s3 = "";
        in >>inputs;
        for (int j = 0; j < inputs.length();++j)
            s+=tolower(inputs[j]);
        int index = inputs.find('@');
        for (int j = 0; j < index; ++j)
        {
            if (s[j] != '.')
            {
                ++c;
                s2 += s[j];
            } 
        }
        for (int j = index; j < s.length(); ++j)
        {
            s2 += s[j];
        }
        // cout<<s2;
        int index2 = s2.find('+');
        index = s2.find('@');
         if (index2 == -1)
            s3 = s2;
        else
        if (index2 < index)
        {
            for (int j = 0; j < index2; ++j)
            {
                s3 += s2[j]; 
            }
            for (int j = index; j < s2.length(); ++j)
            {
             
            s3 += s2[j];
            }
        }
        unique.insert(s3);
      //  cout << index << endl;
        //cout<<"s2 "<<s2<<endl;
      //  cout << s3 << endl;
    }
    cout<<unique.size() <<endl;
}           
}