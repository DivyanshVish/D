#include <stdio.h>
#include <stdbool.h>
#define N 8

int board[N][N];

bool isSafe(int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    return true;
}
bool solveNQueens(int col)
{
    if (col >= N)
        return true;
    for (int row = 0; row < N; row++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 1;
            if (solveNQueens(col + 1))
                return true;
            board[row][col] = 0;
        }
    }
    return false;
}
void printBoard()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
}
int main()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }
    if (solveNQueens(0))
    {
        printf("Solution:\n");
        printBoard();
    }
    else
    {
        printf("No solution found.\n");
    }
    return 0;
}