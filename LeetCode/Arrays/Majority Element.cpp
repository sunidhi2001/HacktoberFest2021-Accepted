// 169. Majority Element
// https://leetcode.com/problems/majority-element/

// 1 - Brute Force Approach will be to check occurance for each element by iterating through array . Time Complexity O(N^2)

// 2 - Another Approach will be to maintain a Frequency Array . 
// Time Complexity O(N) if using Array & Time Complexity O(N log N) if using map 
// (if you use unordered map , it takes O(1) for searching but takes O(N) if there are collisions so overall it would be O(N^2)).

// 3 - Moore's Voting Algorithm
/*  
    majority element exist (n/2 + 1) times therefore 
    other elements => n - (n/2 + 1) = n- n/2 - 1
                   => n/2 -1
    therefore there will be only one majority elements that exist more than n/2 times                
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {

    int count = 0;
    int majority_till_now = 0;

    for(int each : nums)    {
        if(count == 0)  
            majority_till_now = each;

        if( each == majority_till_now )
            count++;

        else 
            count--;    
    }

    return majority_till_now;
}

int main()  {

    vector<int> nums = {-2,-2,1,1,1,-2,-2};
    cout << majorityElement(nums);
    return 0;
}