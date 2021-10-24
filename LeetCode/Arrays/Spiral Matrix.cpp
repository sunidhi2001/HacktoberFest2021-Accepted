// 54. Spiral Matrix
// https://leetcode.com/problems/spiral-matrix/

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int rowStart = 0, rowEnd = m - 1, colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        for (int c = colStart; c <= colEnd; c++)
        {
            ans.push_back(matrix[rowStart][c]);
        }
        rowStart++;

        for (int r = rowStart; r <= rowEnd; r++)
        {
            ans.push_back(matrix[r][colEnd]);
        }
        colEnd--;

        if (rowStart <= rowEnd)
        {
            for (int c = colEnd; c >= colStart; c--)
            {
                ans.push_back(matrix[rowEnd][c]);
            }
            rowEnd--;
        }

        if (colStart <= colEnd)
        {
            for (int r = rowEnd; r >= rowStart; r--)
            {
                ans.push_back(matrix[r][colStart]);
            }
            colStart++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = spiralOrder(mat);

    for (auto it : ans)
        cout << it << " ";
    return 0;
}