#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int flag = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int check = nums[i] + nums[j];
            if (check == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 2, 4};
    vector<int> ans = twoSum(arr, 6);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}