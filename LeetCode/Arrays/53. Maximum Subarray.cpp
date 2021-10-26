// 53. Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/

#include <bits/stdc++.h>
using namespace std;

// BruteForce - use 3 nested for loops to generate all subarrays and find thier sum . Time Complexity O(N^3)

// Optimised BruteForce - use 2 nested for loops , and calulate summation at second loop bcoz it is moving by 1 position every time , so we can eliminate 3rd loop and calculate sum by doing sum + = a[j]  in second loop. Time Complexity

// Optimal Approach - Kadane's Algorithm - Iterate linearly over the vector , add it to sum variable , compare for maximum between maxSum variable and sum variable , and if at any point sum is less than 0 update sum to 0 . Time Complpexity O(N) . Space Complexity O(1).

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxSum = INT_MIN;

    for (auto each : nums)
    {
        // calculate sum upto current element
        sum += each;

        // update maxSum if sum upto current element is greater
        maxSum = max(maxSum, sum);

        // Whenever our sum goes below zero we update it to 0.
        if (sum < 0)
            sum = 0;
    }

    // return maxSum
    return maxSum;
}

int main()
{

    vector<int> nums = {-2, -3, -1, -5, -4};
    cout << maxSubArray(nums);
    return 0;
}