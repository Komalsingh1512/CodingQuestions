#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {3,2,2,3};

    int x = 3;

    for(int i = 0; i < nums.size(); ) {

        if(nums[i] == x) {
            nums.erase(nums.begin() + i);
        }
        else {
            i++;
        }
    }

    for(int num : nums) {
        cout << num << " ";
    }
}