// 442. Find All Duplicates in an Array
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <bits/stdc++.h>
using namespace std;
// Brute Force Approach -> Two Nested for loops.Time Complexity O(N^2) Space Complexity O(1)

// Better Approach -> Hashing . Time Comlexity O(N)  Space Complexity O(N)

// Optimal Approach - Time Complexity O(N) , Space Complexity O(1)
vector<int> findDuplicates(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;

    if (n == 0 || n == 1)
        return ans;

    // Traverse the array
    for (auto i = 0; i < n; i++)
    {   
        // take absolute value of value - 1
        int idx = abs(nums[i]) - 1;

        // If value at that index is negetive , that means we have visited that place before
        // ans that is duplicate number
        if (nums[idx] < 0){
            // push that into ans vector
            ans.push_back(idx + 1);
        }

        // mark visited places as negetive 
        nums[idx] = -nums[idx];    
    }

    return ans;
}
int main()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicates(nums);
    for (auto each : ans)
        cout << each << " ";
    return 0;
}