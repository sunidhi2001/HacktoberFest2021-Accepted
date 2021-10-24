#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{

    int Profit = 0;

    for (size_t i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
            Profit += prices[i] - prices[i - 1];
    }

    return Profit;
}

int main()
{
    vector<int> nums = {5, 2, 7, 3, 6, 1, 2, 4};
    cout << maxProfit(nums);
    return 0;
}