// 560. Subarray Sum Equals K
// https://leetcode.com/problems/subarray-sum-equals-k/

// using HashMap

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int curr_Sum = 0;
    int count = 0;
    
    // Unordered_map to store frequency of Sum.
    unordered_map<int , int> mp;

    // put zero with frequency 1 in the map
    mp[0] = 1;

    for(int i = 0 ; i< nums.size(); i++)
    {
        // Update the currentSum 
        curr_Sum += nums[i];

        // If map contains currentSum - k then we have found our subarray with sum equal to k . 
        if(mp.find(curr_Sum - k) != mp.end()){
            count += mp.at(curr_Sum - k);
        }

        // If it does not contain that number simply add it to the map .
        mp[curr_Sum]++;
    }
    return count;

}

int main()
{
    vector<int> nums = {1, 2, 3};
    cout << subarraySum(nums, 3);
    return 0;
}
