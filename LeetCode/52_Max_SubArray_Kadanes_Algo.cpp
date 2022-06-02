#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = nums[0];
    int curSum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (curSum + nums[i] < nums[i])
            curSum = nums[i];
        else
        {
            curSum += nums[i];
        }
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}

int main()
{
    vector<int> vec = {-2, 2, 5, -11, 6};
    int max = maxSubArray(vec);
    cout << max << endl;
}