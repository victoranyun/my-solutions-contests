#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <cmath>
#include <utility>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    ifstream in("DATA32.txt");//make sure to rename
    for (int y = 0; y < 5; ++y)
    {
        long long int length, foldloc, j = 0, max = -1;
        char type;
        int numOfFolds;
        map<long long int, long long int> ribbon;
        vector<long long int> add;
        in>>length>>numOfFolds;
        ribbon.clear();
        for (long long int i = 1; i <= length; ++i)
            ribbon.emplace(make_pair(i, (long long int)1));
        
   
        // for (auto x: ribbon)
        //     cout<<x.first<<" "<<x.second <<endl;
        for (int z = 0; z < numOfFolds;++z)
        {
            add.clear();
            j = 0;
            max = -1;
            in>>foldloc>>type;
            if (type == 'L')
            {
                for (int i = foldloc-1; i>= ribbon.begin()->first; --i)
                {
                    add.push_back(ribbon[i]);
                    ribbon[i] = 0;
                }
                // cout<<"add \n";
                // for (auto x: add)
                //     cout<<x<<" ";
                // cout<<"\n\n";
                j = 0;
            
                for (int i = 0; i < add.size(); ++i)
                {
                    if (ribbon.find(foldloc+j) != ribbon.end())
                        ribbon[foldloc+j] += add[i];            
                    else
                        ribbon.emplace(make_pair(foldloc+j, add[i]));           
                    ++j;    
                }
            }
            else
            {
                j = 0;
                for (int i = foldloc+1; i < ribbon.size(); ++i)
                {
                    add.push_back(ribbon[i]);
                    ribbon[i] = 0;
                }
                for (int i = 0; i<add.size(); ++i)
                {
                    if(ribbon.find(foldloc-j) != ribbon.end())
                        ribbon[foldloc-j] += add[i];            
                    else
                        ribbon.emplace(make_pair(foldloc-j, add[i]));           
                    ++j;   
                }
            }
            
            length = 0;
            for (auto x: ribbon)
            {
                if (max < x.second)
                    max = x.second;
                if (x.second > 0)
                    ++length;
            }
            // for (auto x: ribbon)
            //     cout<<x.first<<" "<<x.second <<endl;

        }
         
        cout << length << ' ' << max << '\n';
    }
}