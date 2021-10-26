#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_Price = INT_MAX;
    int profit = 0;

    for(int i =0 ; i< prices.size() ; i++)  {

        min_Price = min(prices[i] , min_Price);
        profit = max(profit , prices[i] -  min_Price);

    }

    return profit;
            
}

int main()  {
    vector<int>  prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}