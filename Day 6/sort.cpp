#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vs= {-1,1,0,4,2,3,-1};
    for(int i=0; i<vs.size(); i++){
        if(vs[i]+vs[i+1]==vs[i+2]){
            cout << vs[i] << " ";
        }
        
    }
}