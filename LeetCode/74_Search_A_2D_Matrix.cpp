#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size() - 1;
    int cols = matrix[0].size() - 1;
    int curRow = 0;
    int curCol = cols;

    while (curRow <= rows)
    {
        int curNum = matrix[curRow][curCol];
        if (curNum == target)
            return true;
        if (target > curNum)
            curRow++;
        else
        {
            if (curCol == 0)
                return false;
            else
                curCol--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> vect = {{1}};
    cout << searchMatrix(vect, 1) << endl;
}