// 724. Find Pivot Index
// https://leetcode.com/problems/find-pivot-index/

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int total_sum = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        total_sum += nums[i];
    }

    int left_sum = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        if (i != 0)
            left_sum += nums[i-1];

        // (total_sum - left_sum) equals right sum
        // but we have to exclude the pivot element(bcoz pivot does not belongs tp either of sums) therefore subtract nums[i] from it.

        if ((total_sum - left_sum - nums[i]) == left_sum)
            return i;
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums);
    return 0;
}