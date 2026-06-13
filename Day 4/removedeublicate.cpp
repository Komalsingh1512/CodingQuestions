#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int>nums= {1,1,2};
    int n= nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<n-1; i++){
        if(nums[i]==nums[i+1]){
            nums.erase(nums.begin() +i);
            --i;
        }
        // cout << nums[i] <<" " <<endl;
    }
    return n;
}
