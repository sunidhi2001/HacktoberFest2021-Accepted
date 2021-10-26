// 79. Word Search
// https://leetcode.com/problems/word-search/


// We iterate over every element of board checking if that alphabet is equal to first element of given word. If found then we call the dfsWord() function.

#include <bits/stdc++.h>
using namespace std;

// function which takes board , current alphabet indexes , count of alphabets found till now , word .
bool dfsWord(vector<vector<char>> &board, int i, int j, int count, string word)
{
    // If all the alphabets are found , return true
    if (count == word.length())
        return true;

    if (
        // boundry conditions for board
        (i < 0 || i >= board.size() || j < 0 || j >= board[i].size()) ||
        // if alphabet in the word dosent matches our alphabet at [i][j] we will return false because it cannot form the word.
        (board[i][j] != word.at(count)))
    {
        return false;
    }

    //as in the problem statement its given that we can use each alphabet only once therefore we need to keep a check to avoid using a single alphabet multiple times.(a bit similar to that of backtracking)
    // store that alphabet in some variable
    char usedAlpha = board[i][j];
    // assign some symbol in place of that alphabet
    board[i][j] = '@';

    // call dfsWord func for its neighbour indexes with increment in count.
    bool isFound = dfsWord(board, i + 1, j, count + 1, word) || dfsWord(board, i - 1, j, count + 1, word) || dfsWord(board, i, j + 1, count + 1, word) || dfsWord(board, i, j - 1, count + 1, word);

    // put back the original value at [i][j] which we changed earlier before function call.
    board[i][j] = usedAlpha;

    // return ans
    return isFound;
}

bool exist(vector<vector<char>> &board, string word)
{
    // Traverse through the board , if the first alphabet of word is found in board call the dfsword function on it.

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {            
            if (board[i][j] == word.at(0))
                if (dfsWord(board, i, j, 0, word))
                    return true;
        }
    }

    return false;
}

int main()
{
    vector<vector<char>> board = {{'A', 'B'}, {'C', 'D'}};
    string word = "ACDB";
    cout << exist(board, word);
    return 0;
}