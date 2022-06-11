#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            if (nums[i])
        }
    }
    return nums.size() + 1;
}

int main()
{
    vector<int> nums = {1, 2, 0};
    cout << firstMissingPositive(nums) << endl;
}