#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        int curSum = nums[i];
        for (int j = i; j < nums.size(); j++)
        {
            if (i != j)
            {
                curSum += nums[j];
            }
            sum = max(sum, curSum);
        }
    }
    return sum;
}

int main()
{
    vector<int> vec = {-2, 1};
    int max = maxSubArray(vec);
    cout << max << endl;
}