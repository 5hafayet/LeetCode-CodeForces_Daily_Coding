#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> prices)
{
    int profit = 0, low = prices[0], high[0];
    for (int i = 0; i < prices.size(); i++)
    {
        for (int j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] > prices[i] && profit < prices[j] - prices[i])
                profit = prices[j] - prices[i];
        }
    }
    return profit;
}

int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};
    cout << solution(price) << endl;
}