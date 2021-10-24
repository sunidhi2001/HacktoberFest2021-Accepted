// 11. Container With Most Water
// https://leetcode.com/problems/container-with-most-water/

// Brute Force Approach will be to use 2 loops check for every height and simultaniously calculate their area . 
// Time Complexity O(N^2)


/* Two Pointer Approach - 
Take left and right pointer .
Take min of both and calculate area between them .
Update the answer if area is larger. 
And for desired max area , if left is smaller increment left otherwise decrement right.  
Time Complexity O(N)
*/

#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    // variable for storing max Area
    int maxArea = INT_MIN;

    // Left and Right pointers for traversing the vector
    int left = 0 , right = height.size() - 1;

    while(left < right){

        // If we take max of both heights then the water will overflow from the other smaller side
        // therefore taking min of both heights .
        int minHeight = min(height[left] , height[right]);

        // calculate area and update if previous maxArea was smaller
        maxArea = max(maxArea , minHeight * (right -left));

        // if left height is smaller than the right then increment left as there can be a greater height ahead .
        if( height[left] < height[right])
            left++;
        else 
            right--;            
    }

    return maxArea;


}

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<< maxArea(heights);

    return 0;
}