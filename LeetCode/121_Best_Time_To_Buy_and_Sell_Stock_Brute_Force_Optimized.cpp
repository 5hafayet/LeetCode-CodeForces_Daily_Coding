#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> prices)
{
    int maxPro = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    return maxPro;
}

int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};
    cout << solution(price) << endl;
}