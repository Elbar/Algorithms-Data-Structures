
#include <iostream>


using namespace std;
 
#pragma warning(disable: 4996)
void print(int **mas, int N, int M)
{
    for (int i(0); i < N; i++)
    {
        for (int j(0); j<M; j++)
            cout << mas[i][j] << '\t';
        cout << endl;
    }
    cout << "\n\n";
}
 
int main()
{
    setlocale(0, "");
 
    int N, M;
 
    cout << "Input a count of string >> ";
    cin >> N;
    cout << "Input a count of rows  >> ";
    cin >> M;
 
    int **mas = new int *[N];
    for (int i = 0; i < N; i++)
    {
        mas[i] = new int[M];
    }
        
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Input a element[" << i << "; " << j << "] = ";
            cin >> mas[i][j];
        }
    }
 
    cout << "Used array : \n";
    print(mas, N, M);
 
    delete[] mas;
 
    system("pause");
    return 0;
}