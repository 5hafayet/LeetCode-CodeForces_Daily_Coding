#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    {
        for (int i = m, j = 0; i < (m + n); i++, j++)
        {
            nums1.at(i) = nums2[j];
        }

        sort(nums1.begin(), nums1.end());
    }
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 0, 0, 0};
    vector<int> arr2 = {2, 4, 6};
    merge(arr1, 3, arr2, 3);
}