#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums= {0,2,1,5,3,4};
    vector<int>result;
    for(int i=0; i<nums.size(); i++){
        result.push_back(nums[nums[i]]);
    }
    for(int x: result){
        cout << x <<" ";
    }
    return 0;
}