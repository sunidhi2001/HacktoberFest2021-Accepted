#include<bits/stdc++.h>

using namespace std ;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m -1;
    int j = n - 1;
    int k = ( m + n - 1);

    while (i>=0 && j>=0)
    {
        if( nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
        else{
            nums1[k--] = nums2[j--];
        }    
    }

    while(i >= 0)   {
        nums1[k--] = nums1[i--];
    }

    while(j >= 0)   {
        nums1[k--] = nums2[j--];
    }
    return; 
}

int main()  {
    vector<int>  nums1 = {1,2,4,7,0,0,0};
    vector<int>  nums2 = {2,5,6};
    merge(nums1,4, nums2 , nums2.size());

    for( size_t each : nums1)
        cout << each << " ";

    return 0;
}