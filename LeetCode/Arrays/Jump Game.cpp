// 55. Jump Game II
// https://leetcode.com/problems/jump-game/

#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int n = nums.size();

    // Variable for storing our maximum reachable index
    int reachableIndex = 0;
    // traverse through the nums vector
    for (auto i = 0; i < n; i++)
    {
        // If we have already reached or crossed the last index return true;
        if (reachableIndex >= n - 1)
            return true;

        //If reachableindex is smaller than the index on which we are , it's clear that we cannot move any further from any of the previous indexes so return false
        if (reachableIndex < i )
            return false;

        // update the reachableIndex to be the maxValue that we can reach from the all the indexes that we have traversed.
        reachableIndex = max(reachableIndex, i + nums[i]);
    }

    // If loop terminates that means we have reached out last Index
    return true;
}

int main()
{
    vector<int> nums = {2, 2, 1, 0, 4};
    cout << canJump(nums);
    return 0;
}