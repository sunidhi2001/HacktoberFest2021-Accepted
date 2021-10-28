#include <iostream>
#include <cstring>
using namespace std;

#define N 5
int oneSol;

int row[] = {2, 1, -1, -2, -2, -1, 1, 2, 2};
int col[] = {1, 2, 2, 1, -1, -2, -2, -1, 1};

bool isValid(int r, int c)
{
    if (r < 0 || c < 0 || r >= N || c >= N)
    {
        return false;
    }

    return true;
}

void printKnightsTour(int visited[N][N], int r, int c, int pos)
{
    // if a single solution is found, return back
    if (oneSol)
        return;

    visited[r][c] = pos;
    if (pos == N * N)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        visited[r][c] = 0;
        oneSol = 1;
        return;
    }

    for (int k = 0; k < 8; k++)
    {
        int newR = r + row[k];
        int newC = c + col[k];

        if (isValid(newR, newC) && !visited[newR][newC])
        {
            printKnightsTour(visited, newR, newC, pos + 1);
        }
    }
    visited[r][c] = 0;
}

int main()
{
    int visited[N][N];
    // initializing 2-d array with 0
    memset(visited, 0, sizeof visited);

    int pos = 1;
    printKnightsTour(visited, 0, 0, pos);

    return 0;
}