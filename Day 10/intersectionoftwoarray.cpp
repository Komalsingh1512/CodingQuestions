#include <iostream>
#include <vector>
using namespace std; 
int main(){
    vector<int>nums = {3,0,1,3};
    vector<int>ans = {2,3,3};
    vector<int>result;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<ans.size(); j++){
            if(nums[i]==ans[j]){
                result.push_back(nums[i]);
                break;
            }
        }  
    }
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}