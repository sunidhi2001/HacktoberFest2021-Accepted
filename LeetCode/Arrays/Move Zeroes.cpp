#include <bits/stdc++.h>

using namespace std;

// 
void moveZeroes(vector<int> &nums)
{

    int i = 0, j = 0;
    
    while (j < nums.size())
    {
        // if number at jth index is not equal to then swap i and j and increment both . 
        if (nums[j] != 0)
            swap(nums[i++], nums[j++]);
        
        // else increment only j.
        else
            j++;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 0, 3, 12};
    moveZeroes(nums);

    for (size_t each : nums)
    {
        cout << each << " ";
    }
    return 0;
}