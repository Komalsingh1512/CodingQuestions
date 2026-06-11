#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    //frequency mapping
    //hashing technique
    vector<int> vt;

    // vector<int>vt={23,34,56,89,30,73,23,56,89}
    vt.push_back(26);
    vt.push_back(26);
    vt.push_back(96);
    vt.push_back(96);
    vt.push_back(26);
    vt.push_back(26);
    vt.push_back(19);
    vt.push_back(60);
    vt.push_back(60);
    vt.push_back(34);

    map<int, int> mp1;

    mp1.insert({26,4});
    mp1.insert({96,2});
    mp1.insert({19,1});
    mp1.insert({60,2});
    mp1.insert({34,1});

    // for (auto i : vt)
    // {
    //     if (mp1.find(i) != mp1.end())
    //     {
    //         mp1[i]+= 1;
    //     }
    //     else
    //     {
    //         mp1[i]= i;
    //     }
    // }
    for (auto it : mp1)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}