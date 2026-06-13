#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 4, 4, 4};
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else{
        count = 1;
        }
        if(count>2){
            nums.erase(nums.begin()+i);
            i--;
            count--;
        }

    }
      return nums.size();
   
}