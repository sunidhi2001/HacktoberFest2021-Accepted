// 1423. Maximum Points You Can Obtain from Cards
// https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

#include <bits/stdc++.h>
using namespace std;

/*
// Time Complexity O(N)  Space Complexity O(k)
int maxScore(vector<int> &cardPoints, int k)
{
    int n = cardPoints.size();
    int ans = 0;

    //create two vectors of size k+1 to store the sum from leftSide and rightSide respectively.
    vector<int> leftSum(k + 1, 0), rightSum(k + 1, 0);

    // Populate the leftSum vector
    for (size_t i = 1; i <= k; i++)
        leftSum[i] = leftSum[i - 1] + cardPoints[i - 1];

    // Populate the rightSum vector
    for (size_t i = 1; i <= k; i++)
        rightSum[i] = rightSum[i - 1] + cardPoints[n - i];

    // Find the maximum sum by checking all possible values .
    // exp( cardPoints = [1, 2, 3, 4, 5, 6, 1 ])
    // leftSum = [ 0, 1, 3, 6 ]
    // rightSum = [ 0, 1, 7, 12 ]
    // for every i we are adding ith value in leftSum to k-i value in rightSum .
    // this will check for all possible combinations for k cards
    for (size_t i = 0; i <= k; i++)
    {
        int currSum = leftSum[i] + rightSum[k - i];
        // Update the ans to maximum
        ans = max(currSum, ans);
    }

    return ans;
}
*/

// Sliding Window Approach - Time Complexity o(N) , Space Complexity O(1)
// Since we're forced to take K amount of cards no matter what, so Instead of counting the sum of the values between the two pointers, we'll instead be counting the sum of the values outside the sliding window.

// We can start by iterating through the first K cards of our card list(C) and finding the total points.At this point, our reverse window will be the cards from left = K to j = C.length - 1. At each iteration, we'll slide the window backwards, removing one card from the left side ( -C[ left ]) and adding one card from the right side ( +C[ right ]) each time.

// We should keep track of the best possible result at each iteration, then return best once we reach the end.
int maxScore(vector<int> &points, int k)
{
    int n = points.size();
    int total = 0;

    // Calculating points from first K cards
    for (int i = 0; i < k; i++)
        total += points[i];

    int best = total;

    // Iterating from k-1 to n-1 .
    // sliding the window backwards and removing card from left and adding card from right simultaneously
    // keeping track of max possible answer
    for (int left = k - 1, right = n - 1; ~left; left--, right--)
    {
        total += points[right] - points[left];
        best = max(best, total);
    }

    return best;
}

int main()
{
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << maxScore(cardPoints, k);
    return 0;
}