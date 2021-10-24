//  Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int i = 0, j = 0;
    while (j < nums.size())
    {
        if (nums[i] == nums[j])
            j++;

        else if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i+1 ;
}

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums);
    return 0;
}