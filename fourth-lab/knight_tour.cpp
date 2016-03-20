#include <iostream>
#include<iomanip>
using namespace std;


const int columns = 8;
const int rows = 8;


void displayBoard(int [][columns]);


void displayBoard(int board[][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << setw(2)<<board[i][j]<<"  ";

        cout << endl;
    }
}

int main()
{

    int horizontal [rows] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical [columns] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int count = 1;
    int currentColumn = 0;
    int currentRow = 3;
    int moveNumber= 1;
    int lastRow, lastCol;
    int squaresLeft = 64;
    int gameBoard[columns][rows];
    for(int i= 0; i< columns; i++)
    {
        for (int j = 0; j< rows; j++)
        {
            gameBoard[i][j] = 0;
        }
    }

    displayBoard (gameBoard);
    cout<<endl;
    gameBoard[currentColumn][currentRow]= count;
    count++;


    while (squaresLeft)
    {
        if (count <=64)
        {
            lastCol = currentColumn;
            lastRow = currentRow;
            currentColumn += vertical[moveNumber];
            currentRow += horizontal[moveNumber];



            if (gameBoard[currentColumn][currentRow] != 0)
            {
                currentColumn = lastCol;
                currentRow = lastRow;
                moveNumber++;
            }
            else
            {
                gameBoard[currentColumn][currentRow] = count;
                count++;
                moveNumber = gameBoard[currentColumn][currentRow];
            }
        }
        squaresLeft--;
    }
    displayBoard (gameBoard);
}
