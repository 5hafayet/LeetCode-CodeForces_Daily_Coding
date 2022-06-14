#include <bits/stdc++.h>
using namespace std;

int heightChecker(vector<int> &heights)
{
    vector<int> expected;
    copy(heights.begin(), heights.end(), expected.begin());
    sort(expected.begin(), expected.end());
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        if (heights[i] != expected[i])
            return heights[i];
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 1, 4, 2, 1, 3};
    cout << heightChecker(arr);
}