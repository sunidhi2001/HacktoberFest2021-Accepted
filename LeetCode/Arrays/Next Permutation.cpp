// 31. Next Permutation
// https://leetcode.com/problems/next-permutation/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity O(N)

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int breakPoint, greaterThanBreakPoint;
    for (breakPoint = n - 2; breakPoint >= 0; breakPoint--)
    {

        // Traverse from the back and find the breakPoint
        if (nums[breakPoint] < nums[breakPoint + 1])
            break;
    }

        // If there is no breakPoint simply reverse the array.
        // example -> (5 , 4, 3, 2, 1)
        if (breakPoint < 0)
        {
            reverse(nums.begin(), nums.end());
        }

        // (1 ,3 ,5 ,4 ,2) breakPoint element is 3 here
        else
        {
            // If breakPoint exists , Traverse from the back and find index of element greater than breakPoint element 
            for (greaterThanBreakPoint = n - 1; greaterThanBreakPoint > breakPoint; greaterThanBreakPoint--)
            {
                // (1 ,3 ,5 ,4 ,2) greaterThanBreakPoint element is 4 here
                if (nums[greaterThanBreakPoint] > nums[breakPoint])
                    break;
            }

            // swap breakPoint element and greaterThanBreakPoint element in order to find next greater permutation. ( swap 3 and 4 )
            swap(nums[breakPoint], nums[greaterThanBreakPoint]);

            // Reverse the elements after breakpoint as to rank lower in permutation bcoz it is already in descending . After reverse it will be in ascending which will result in lower rank . (reverse 5, 3 ,2 )
            reverse(nums.begin() + breakPoint + 1, nums.end());
        }
    
}

int main()
{
    vector<int> nums = {1,1,5};
    nextPermutation(nums);
    for(auto it : nums)
        cout << it << " ";
    return 0;
}