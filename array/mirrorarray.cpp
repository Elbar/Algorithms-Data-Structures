#include <iostream>
#include <stdlib.h>
#include <iomanip.h>
using namespace std;
 
int main()
{
    const int size = 6;
    int a[size][size];
    int x = 0;
 
    for (int i = 0; i < size_matrix; i++)
    {
        for (int j = 0; j < size_matrix; j++)
        {
            a[i][j] = 1 + rand() % 20; 
        }
    }
    
    for (int i = 0; i < size_matrix; i++)
    {
        for (int j = 0; j < size_matrix; j++)
        {
            cout << setw(3)<<a[i][j] << " ";
        }
        cout << endl;
    }
 
    cout << "\n\n";

    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size / 2; j++)
        {
            x = a[i][j];
            a[i][j] = a[i][size_matrix - 1 - j];
            a[i][size_matrix - 1 - j] = x;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(3)<<a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}