#include <iostream>
#include <vector>
using namespace std;
int main()
{
    bool flag;
    vector<int> nums = {1, 4, 2, 8, 3, 7, 5};
    for (int i = 0; i < nums.size() - 1; i++)
    {
        flag = false;
        for (int j = 0; j < nums.size() - 1 - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    for (int j = 0; j < nums.size(); j++)
    {
        cout << nums[j] << " ";
    }
}