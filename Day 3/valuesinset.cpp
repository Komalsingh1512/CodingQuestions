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

    set<int> st;

    for (int i = 0; i < vt.size(); i++)
    {

        st.insert(vt[i]);
    }
    for (auto i : st)
    {
        cout << i << endl;
    }
}

// class Solution {
// public:
//     bool isValid(string s) {
//         if("()" || "[]" || "{}"){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// 20
// class Solution
// {
// public:
//     bool isValid(string s)
//     {
//         stack<char> st;
//         for (char ch : s)
//         {
//             if (ch == '(' || ch == '{' || ch == '[')
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 if (st.empty())
//                     return false;
//                 char top = st.top();
//                 st.pop();

//                 if ((ch == ')' && top != '(') || ch == '}' && top != '{') ch== ']' && top!='['))
//                     {
//                         return false;
//                     }
//             }
//         }
//         return st.empty();
//     }
// };