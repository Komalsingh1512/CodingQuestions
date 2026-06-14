#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s= {10,40,70,30,20,60,50};
    for(auto x: s){
        cout << x <<" ";
    }
    cout<<*s.begin();
}