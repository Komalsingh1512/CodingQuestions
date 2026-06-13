#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,1,1,2,2,3,3,4,4,4};

    int count = 1;

    for(int i = 0; i < nums.size()-1; ) {

        if(nums[i] == nums[i+1]) {
            count++;

            if(count > 2) {
                nums.erase(nums.begin() + i + 1);
            }
            else {
                i++;
            }
        }
        else {
            count = 1;
            i++;
        }
    }

    for(int x : nums) {
        cout << x << " ";
    }
}