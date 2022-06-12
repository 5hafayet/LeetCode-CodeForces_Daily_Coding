#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
        vector<int> curRow;
        for (int j = 1; j <= i; j++)
        {
            int x =
                curRow.push_back()
        }
    }
}

int main()
{
    int num;
    cin >> num;
    vector<vector<int>> vec = generate(num);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}