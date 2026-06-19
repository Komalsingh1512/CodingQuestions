#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 1, 5, 4, 3, 6};
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < min_index)
            {
                min_index = j;
            }
        }
        swap(min_index, nums[i]);
    }
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] <<" ";
    }
}