#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int sum = 0;
    int k = 3;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    int maxsum = sum;
    for (int i = k; i < nums.size(); i++)
    {
        sum = sum - nums[i - k] + nums[i];
        maxsum = max(maxsum, sum);
    }
    cout << maxsum;
}
