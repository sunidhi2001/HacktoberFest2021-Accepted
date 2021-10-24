// 287. Find the Duplicate Number
// https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>
using namespace std;
// Brute Force Approach -> Two Nested for loops.Time Complexity O(N^2) Space Complexity O(1)

// Better Approach -> Hashing Approach . Time Comlexity O(N)  Space Complexity O(N)
/* 
int findDuplicateByHashing(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    else
    {
        vector<int> freq(n, 0);
        // Store freq of each num in freq vector
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        // Check for freq greater than 2 return that index
        for (int i = 0; i < freq.size(); i++)
        {
            if (freq[i] == 2)
                return i;
        }
    }
    return -1;
}
*/

// Another Approach - LinkedList Cycle Method .Take two Pointers slow and fast . move slow by 1 and fast by 2 .When they meet at a point . Put fast pointer to starting of vector and now move slow and fast both by 1 , the point at which they meet is the duplicate number. 
// Time Complexity O(N) , Space Complexity O(1) as we not storing any cycle.
int findDuplicate(vector<int> &nums)
{
    // Two pointers
    int slow = nums[0], fast = nums[0];

    // Keep incrementing fast(by 2) and slow(by 1) until slow and fast collide.
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // When fast and slow collide , put fast pointer at starting value.
    fast = nums[0];

    // Now when they collide that will be the duplicate number
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    // return either fast or slow pointer
    return slow;
}

int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums);
    return 0;
}