/*
    Author: CivilKen
    Date: 23th July 2019
 */
/*
Tic Tac Toe game by two players
圈圈叉叉
 */

#include <stdio.h>
#include <stdlib.h>

int CheckWin(int matrix[3][3]);
void DrawBoard(int matrix[3][3], int PlayerTurn, int position);

void main()
{
    int matrix[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int WinResult = -1;
    int PlayerTurn = 11;
    int position = 0;

    while (WinResult<0)
    {
        if (PlayerTurn==11)
        {
            printf("\nIt' player1's turn, enter your position:");
            scanf("%d", &position);
            while (position!=1 && position!=2 && position!=3 && position!=4 && 
            position!=5 && position!=6 && position!=7 && position!=8 && position!=9)
            {
                printf("\ninvaild position, enter the position again\n");
                scanf("%d", &position);
            }
            DrawBoard(matrix, PlayerTurn, position);
            WinResult = CheckWin(matrix);
            PlayerTurn = 22;
        }
        else if (PlayerTurn==22)
        {
            printf("\nIt' player2's turn, enter your position:");
            scanf("%d", &position);
            while (position!=1 && position!=2 && position!=3 && position!=4 && 
            position!=5 && position!=6 && position!=7 && position!=8 && position!=9)
            {
                printf("\ninvaild position, enter the position again\n");
                scanf("%d", &position);
            }
            DrawBoard(matrix, PlayerTurn, position);
            WinResult = CheckWin(matrix);
            PlayerTurn = 11;
        }        
    }
    if (WinResult==11)
    {
        printf("\nGame Over!!!");
        printf("\nPlayer1 Win!!!");
    }
    else if (WinResult==22)
    {
        printf("\nGame Over!!!");
        printf("\nPlayer2 Win!!!");
    }
    else if (WinResult==0)
    {
        printf("\nGame Over!!!");
        printf("\nIt's a draw.");
    }
}

int CheckWin(int matrix[3][3])
{
    // return the result of the game
    // 1: player1 win; 2: player2 win;
    // 0: game draw; -1: game haven't end
    int GameResult = -1;

    if (matrix[0][0]==matrix[0][1] && matrix[0][0]==matrix[0][2])
        GameResult = matrix[0][0];
    else if (matrix[0][0]==matrix[1][0] && matrix[0][0]==matrix[2][0])
        GameResult = matrix[0][0];
    else if (matrix[0][0]==matrix[1][1] && matrix[0][0]==matrix[2][2])
        GameResult = matrix[0][0];
    else if (matrix[0][1]==matrix[1][1] && matrix[0][1]==matrix[2][1])
        GameResult = matrix[0][1];
    else if (matrix[0][2]==matrix[1][2] && matrix[0][2]==matrix[2][2])
        GameResult = matrix[0][2];
    else if (matrix[1][0]==matrix[1][1] && matrix[1][0]==matrix[1][2])
        GameResult = matrix[1][0];
    else if (matrix[2][0]==matrix[2][1] && matrix[2][0]==matrix[2][2])
        GameResult = matrix[2][0];
    else if(matrix[0][0]!=1 && matrix[0][1]!=2 && matrix[0][2]!=3
     && matrix[1][0]!=4 && matrix[1][1]!=5 && matrix[1][2]!=6 &&
     matrix[2][0]!=7 && matrix[2][1]!=8 && matrix[2][2]!=9)
        GameResult = 0;
    else
        GameResult = -1;

    return GameResult;
}

void DrawBoard(int matrix[3][3], int PlayerTurn, int position)
{
    // assign the position by each player, and draw out the result

    int x = position/3, y = position-3*x-1;
    matrix[x][y] = PlayerTurn;
    
    for (int i = 0; i < 3; i++)
    {
        if (i!=0)
        {
            printf("\n--- --- ---\n");
        }
        
        for (int j = 0; j < 3; j++)
        {
            if (j!=0)
            {
                printf("|");
            }
            printf("%2d ", matrix[i][j]);
        }
    }
}
