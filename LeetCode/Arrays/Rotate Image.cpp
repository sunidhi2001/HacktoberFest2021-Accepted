// 48. Rotate Image
// https://leetcode.com/problems/rotate-image/

// Bruteforce Approach will be to make another matrix and simply copy elements as desited to rotate the image
// Time - O(N^2)   Space - O(N^2)

// Better Approach - Intution - if we carefully observe we can see that the first row was the first column but in reverse order. So we put row inPlace of columns in matrix transpose. Therefore we can conclude that first find transpose of matrix then reverse every single row
// Time - O(N^2)    Space - O(1)

#include <bits/stdc++.h>
using namespace std;

// Function to transpose matrix
void transposeMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int row = 0; row < n; row++)
        for (int col = row + 1; col < n; col++)
            swap( matrix[row][col] , matrix[col][row] );

    return;
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // Transpose of matrix
    transposeMatrix(matrix);

    // Reversing each row
    for( int row = 0  ; row < n ; row++)
        reverse(matrix[row].begin() , matrix[row].end()) ;

    return;
}

int main()
{

    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate(mat);
    for( auto row : mat)    {
        for(auto col : row)
            cout << col << " ";
        cout << endl;    
    } 
    return 0;
}