// 39. Combination Sum
// https://leetcode.com/problems/combination-sum/

#include <bits/stdc++.h>
using namespace std;

void findCombination(int idx, int target, vector<int> &candidates, vector<vector<int>>& ans, vector<int>& temp)
{
    // Base Case
    if (idx == candidates.size())
    {
        // if we reached our target sum , push_back the combination into ans
        if (target == 0)
            ans.push_back(temp);
        return;
    }

    // Pick up the element
    if (candidates[idx] <= target)
    {
        // Include that element in Combination
        temp.push_back(candidates[idx]);
        findCombination(idx, target - candidates[idx], candidates, ans, temp);
        // Remove that element from combination after recursive call
        temp.pop_back();
    }
    // Not pick up that element
    findCombination(idx + 1, target, candidates, ans, temp);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    findCombination(0, target, candidates, ans, temp);
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(nums, target);

    for (auto vec : ans)
    {
        for (auto num : vec)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}