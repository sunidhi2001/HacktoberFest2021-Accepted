// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>
using namespace std;

// Brute Force - Use two nested for loops to check if numbe rhas occured more than once. Time Complexity (N^2)

// Better - Sort the array and check neighbours for duplicates . Time Complexity O(N log(N))

/* 
Optimal 
   1- use unordered_map store freq and its number , then check if any number freq is more than 1 or not .    Time Complexity O(N) .Space Complexity O(N).  

   2- use set . Insert all elements in set and if size of set is not equal to vector size return true. bcoz set only conatins distinct elements . Time Complexity O(N)  , Space Complexity O(N).  

*/

bool containsDuplicate(vector<int> &nums)
{
    /* ------------- using unordered_map ------------- 
    if (nums.empty())
    {
        return false;
    }
    unordered_map<int, int> mp;
    for (int i : nums)
    {
        // increment freq of element and check if it has occured more than one 
        if (++mp[i] > 1)
        {
            return true;
        }
    }
    return false;
    */ 


    /* ------------- using set -------------
    int n = nums.size();
    set<int> s;

    // populate the set 
    for (int i = 0; i < n; i++)
        s.insert(nums[i]);
        
    // compare the size of set and vector
    if (n != s.size())
        return true;
    
    return false;
    */
}

int main()
{
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << containsDuplicate(nums) << endl;
    return 0;
}