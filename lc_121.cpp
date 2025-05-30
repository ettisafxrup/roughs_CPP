#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int max_profit{};
    int best_buy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        max_profit = max(max_profit, prices[i] - best_buy);
        best_buy = min(best_buy, prices[i]);
    }

    return max_profit;
}

int main()
{
    // vector<int> prices = {7, 1, 5, 3, 6, 4};
    vector<int> prices = {2, 4, 1};
    // vector<int> prices = {7, 6, 4, 3, 1};

    cout << maxProfit(prices) << '\n';
    return 0;
}