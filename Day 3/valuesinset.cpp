#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vt;
    vt.push_back(26);
    vt.push_back(26);
    vt.push_back(6);
    vt.push_back(6);
    vt.push_back(24);
    vt.push_back(24);

    set <int> st;

   for(int i=0; i < vt.size(); i++){

    st.insert(vt[i]);

   }
   for(auto i: st){
    cout << i << endl;
   }
    
}