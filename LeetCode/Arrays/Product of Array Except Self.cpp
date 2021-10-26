// 238. Product of Array Except Self
// https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity is O(N)

vector<int> productExceptSelf(vector<int> &nums)
{

    vector<int> ans;

    if (nums.size() == 0)
        return ans;

    int product = 1;
    // Update the answer vector with left cumulative multiplication values
    for (int i = 0; i < nums.size(); i++)
    {
        product *= nums[i];
        ans.push_back(product);
    }

    //Product is real-time right-hand side elements multiplication values.
    product = 1;

    // Traverse from the right side and update the answer vector.
    for (int i = nums.size() - 1; i > 0; i--)
    {
        ans[i] = ans[i - 1] * product;

        // update the Product of right-hand side elements.
        product *= nums[i];
    }

    // for 0th index we dont have any elements on left side and our Product is storing the Product of right-hand side elements therefore put that at 0th index in answer.
    ans[0] = product;
    return ans;
}

int main()
{
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> ans = productExceptSelf(nums);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}