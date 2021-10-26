// 1 . Two Sum 
// https://leetcode.com/problems/two-sum/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        

        unordered_map<int, int> m;  
        vector<int> ans;
        
        for(int i= 0 ; i<nums.size(); i++)
        {
            // Check if (target - nums[i]) exist in the unordered_map or not
            if(m.find(target-nums[i]) != m.end() )
            {   
                // If it exists , simply push_back into ans other number index and current number index
                ans.push_back( m[target-nums[i]] );
                ans.push_back(i);
                return ans;
            }

            // If it does not exist put number with its index into the unordered_map
            m[nums[i]] = i;
        }
        
        return ans;
}

int main() {

    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(nums , target);
    for( auto it : ans)
        cout<< it << " ";

    return 0;
}