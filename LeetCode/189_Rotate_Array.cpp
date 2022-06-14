#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v, int k)
{
    std::rotate(v.rbegin(), v.rbegin() + k % v.size(), v.rend());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    cout << "Before rotaion: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    rotate(nums, k);
    cout << "After Rotation: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}