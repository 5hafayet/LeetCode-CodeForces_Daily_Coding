#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int i = 0, j = 1;
    for (int k = 2; k < nums.size(); k++)
    {
        if (nums[k] > nums[j])
        {
            if (nums[j] > nums[i])
            {
                i = j;
            }
            j = k;
        }
        else
        {
            if (nums[k] > nums[i])
                i = k;
        }
    }
    return (nums[i] - 1) * (nums[j] - 1);
}
int main()
{
    vector<int> vec = {1, 5, 4, 5};
    cout << maxProduct(vec) << endl;
    return 0;
}
