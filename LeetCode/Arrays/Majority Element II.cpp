// Majority Element II
// https://leetcode.com/problems/majority-element-ii/

// 1 - Brute Force Approach will be to check occurance for each element by iterating through array . Time Complexity O(N^2)

// 2 - Another Approach will be to maintain a Frequency Array .
// Time Complexity O(N) if using Array & Time Complexity O(N log N) if using map
// (if you use unordered map , it takes O(1) for searching but takes O(N) if there are collisions so overall it would be O(N^2)).

// 3 - Moore Voting Algorithm.
// --> At most we can have two majority elements and at least we can have zero bcoz there can't be more than 2 elements that appear more than n/3 times.

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int size = nums.size();

    int num1 = -1, num2 = -1, count1 = 0, count2 = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (nums[i] == num1)
            count1++;

        else if (nums[i] == num2)
            count2++;

        else if (count1 == 0){
            num1 = nums[i];
            count1 = 1;
        }

        else if (count2 == 0){
            num2 = nums[i];
            count2 = 1;
        }

        else
            count1--, count2--;
    }

    vector<int> ans;
    count1 = count2 = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (num1 == nums[i])
            count1++;
        else if (num2 == nums[i])
            count2++;
    }
    // cout << num1 <<" "<< num2 <<endl;
    // cout << count1 <<" "<< count2 <<endl;
    if (count1 > size / 3)
        ans.push_back(num1);
    if (count2 > size / 3)
        ans.push_back(num2);

    return ans;
}

int main()
{

    vector<int> nums = {1,2};
    vector<int> ans = majorityElement(nums);
    for (int elem : ans)
        cout << elem << " ";
    return 0;
}