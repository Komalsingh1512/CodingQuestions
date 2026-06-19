class Solution
{
public:
    bool ispossible(vector<int> &piles, int h, int mid)
    {
        long long total_time_taken = 0;
        for (int x : piles)
        {
            total_time_taken += ceil(x / (mid * 1.0));
        }
        return total_time_taken <= h;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = min_element(piles.begin(), piles.end());
        int high = max_element(piles.begin(), piles.end());
        int ans = 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (ispossible(piles, h, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};