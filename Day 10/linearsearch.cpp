#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums= {3,0,1};
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i]+1 != nums[i+1]){
            cout<< nums[i]+1;
        }
    }
    return 0;
}