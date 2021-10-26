// 1512. Number of Good Pairs
// https://leetcode.com/problems/number-of-good-pairs/
#include <bits/stdc++.h>
using namespace std;

// Brute Force - Use nested for loop to find all indexes satisying this condition . Time Complexity - O(N^2) . Space Complexity O(1)

// Better - Use unorder_map of vector to store frequncy using element value as index of each element and we know that if any numbers appear n times , then it can form upto n*(n-1)/2 pairs (Formula - NC2).
// For each element we will store its index at its value . So after iterating over the vector , we can check the size of vector at index , it will give the no of times the element has appeared . And we can apply the formula and do this iterating over the map.
// Time Complexity O(N)  , Space Complexity O(N)

int numIdenticalPairs(vector<int> &nums)
{
     // Creating unorder_map of vector 
    unordered_map<int, vector<int>> um;

    int n = nums.size();
    // iterating over the nums vector to populate the unordered_map 
    for (int i = 0; i < n; i++)
    {   
        // using element value as index to store its occurances(On which index it has appeared) in our vector  
        um[nums[i]].push_back(i);
    }

    // variable to store ans
    int ans = 0;

    // Iterating over the unordered_map
    for (auto it : um)
    {   
        // calculate the size of vector to get the no of times the number has occured
        int s = it.second.size();

        // calculating the pairs using NC2 formula
        int sum = (s * (s - 1)) / 2;

        // updating the ans variable
        ans += sum;
    }
    
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    cout << numIdenticalPairs(nums) << endl;
    return 0;
}