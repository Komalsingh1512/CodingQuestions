#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            return nums[i];
        }
    }
}