#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vs= {-1,1,0,4,2,3,-1};
    sort(vs.begin(), vs.end());
    for(int i=0; i<vs.size(); i++){
        cout << vs[i] << " ";
    }
}