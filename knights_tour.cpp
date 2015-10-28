/*
#include <iostream>
#include <iomanip>
using namespace std;

const int hor = 8, ver = 8;

void boardPrint(int [][ver], int);

int main()
{
    int board[hor][ver] = {0};
    int horizontal[hor] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[ver] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow, currentColumn, countMove = 1, moveNumber;
    bool status = false;

    while (status == false)
    {
        cout << "Input recent coordinates(row[],column[]) via space: ";
        cin >> currentColumn >> currentRow;
        if (currentColumn < 8 && currentColumn >=0 && currentRow < 8 && currentRow >=0)
            status = true;
        else
            cout << "These coordinates don't exist. Retry again." << endl;
    }

    for (int i = 1; i <= 64; i++)
    {
        board[currentColumn][currentRow] = i;
        status = false;


        for (int j = 0; j < hor; j++)
            if (currentColumn + vertical[j] < 8 && currentColumn + vertical[j] >=0
                && currentRow + horizontal[j] < 8 && currentRow + horizontal[j] >=0
                && board[currentColumn + vertical[j]][currentRow + horizontal[j]] == 0)
            {
                status = true;
                break;
            }


        while (status == true)
        {
            moveNumber = rand() % 8;
            if (currentColumn + vertical[moveNumber] < 8 && currentColumn + vertical[moveNumber] >=0
                && currentRow + horizontal[moveNumber] < 8 && currentRow + horizontal[moveNumber] >=0
                && board[currentColumn + vertical[moveNumber]][currentRow + horizontal[moveNumber]] == 0)
            {
                currentColumn +=horizontal[moveNumber];
                currentRow +=  vertical[moveNumber];
                countMove++;
                break;
            }
        }

        if (status == false)
            break;
    }

    cout << endl << "Count of moves: " << countMove << endl << endl;
    boardPrint(board, hor);
    system("pause");
    return 0;
}


void boardPrint(int b[][ver], int horiz)
{
    for (int i = 0; i < horiz; i++)
    {
        for (int j = 0; j < horiz; j++)
            cout << setw(4) << b[i][j];
        cout << endl<<endl;
    }
}
 */