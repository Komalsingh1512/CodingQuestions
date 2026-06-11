#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //vector<int> nums = {1,2,3,4,5};
    vector<int>v;
    v.push_back(23);
    v.push_back(45);
    v.push_back(67);        
    v.push_back(89);
    v.push_back(12);
    
    // v.pop_back();
    
    sort(v.begin(), v.end());
    for(int i =0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Size of vector: " << v.size() << endl;
    v.begin();
    cout << "First element: " << *v.begin() << endl; 
    v.end();
    cout << "Last element: " << *(v.end() - 1) << endl;

    return 0;
}