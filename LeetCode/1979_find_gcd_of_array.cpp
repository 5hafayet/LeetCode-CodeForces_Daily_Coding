#include <bits/stdc++.h>
using namespace std;

int findGCD(vector<int> &nums)
{
    int small = nums[0], large = nums[0], gcd = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < small)
            small = nums[i];
        if (nums[i] > large)
            large = nums[i];
    }
    for (int i = 1; i <= small; i++)
    {
        if (small % i == 0 && large % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    vector<int> vect = {2, 5, 6, 9, 10};
    cout << findGCD(vect) << endl;
    return 0;
}