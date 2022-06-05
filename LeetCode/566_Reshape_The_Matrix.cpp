#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> ans;
    int row = mat.size();
    int column = mat[0].size();

    if (row + column == r * c)
    {
        int ans_row = 0;
        int ans_col = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                ans.push_back(mat)
            }
            
        }
        

        return ans;
    }
    else
        return mat;
}

int main()
{
    vector<vector<int>> arr = {{1, 2}, {3, 4}};
    cout << matrixReshape(arr, 1, 4) << endl;
}