#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> ans(r, vector<int>(c));
    vector<int> temp;
    int row = mat.size();
    int column = mat[0].size();
    if (row * column != r * c)
        return mat;
    else
    {
        int row = 0;
        int col = 0;

        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                ans[row][col] = mat[i][j];
                col++;
                if (col == c)
                {
                    col = 0;
                    row++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2}, {3, 4}};
    vector<vector<int>> ans = matrixReshape(arr, 2, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}