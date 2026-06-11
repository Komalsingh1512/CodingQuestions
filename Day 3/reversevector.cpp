#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(23);
    v.push_back(45);
    v.push_back(67);        
    v.push_back(89);
    v.push_back(12);
    // v.pop_back();
    // v.size();
    // v.front();
    // v.back();
    // sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}