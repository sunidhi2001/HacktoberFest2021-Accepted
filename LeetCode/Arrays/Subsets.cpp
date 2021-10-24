// 78. Subsets
// https://leetcode.com/problems/subsets/

#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int> &subsets, int index, vector<int> &nums, vector<vector<int>> &ans)
{
    // Base Case
    if (index == nums.size())
    {
        ans.push_back(subsets);
        return;
    }

    // Not pick ith element
    generateSubsets(subsets, index + 1, nums, ans);

    // Pick ith element in Subset
    subsets.push_back(nums[index]);
    generateSubsets(subsets, index + 1, nums, ans);
    subsets.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> subsets;
    generateSubsets(subsets, 0, nums, ans);
    for (auto vec : ans)
    {
        for (auto each : vec)
            cout << each << " ";
        cout << endl;
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    subsets(nums);
    return 0;
}
