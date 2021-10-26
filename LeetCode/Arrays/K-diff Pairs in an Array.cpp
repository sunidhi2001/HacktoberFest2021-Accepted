// 532. K-diff Pairs in an Array
// https://leetcode.com/problems/k-diff-pairs-in-an-array/

#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach will be to use two nested for loops to check all possible pairs
// Time Complexity O(N^2) Space Complexity O(1)

// Better Approach will be to Sort the array and iterate through the array and for every number search for the value that makes unique pair using binary search.
// Time Complexity O(N logN)  Space Complexity O(1)

// HashMap Approach - Time Complexity O(N) Space Comlexity O(N)
// nums[i] - nums[j] = k ==> nums[i] - k = nums[j]
// Iterate over hashmap for every element(nums[i]) in hashmap search for its diff pair element (nums[j]) , If found increment count.
// there is an edge case , if k=0 then every number will form diff pair with itself so we have to handle it first.
int findPairs(vector<int> &nums, int k)
{
    // when k<0
    if (k < 0)
        return 0;

    unordered_map<int, int> umap;

    // Populate the unordered_map
    for (int i = 0; i < nums.size(); i++)
        umap[nums[i]]++;

    int count = 0;

    // Edge case when k =0 , we simple search for elements whose frequency is greater than 1
    if(k==0){
        for(auto x : umap){
            if(x.second > 1)
                count++;
        }
        return count;
    }
    // Traverse through unordered_map
    for (auto x : umap)
        //if it contains (x.first - k) which is our nums[j] , increment count 
        if (umap.count(x.first - k))
            count++;

    return count;
}

int main()
{

    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;
    cout << findPairs(nums, k);
    return 0;
}