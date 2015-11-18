#include <iostream>
#include "bank.h"
using namespace std;


int main()
{

    Bank client;
    int tmp;
    string surname, name, middle_name;
    cout<<"Count of clients";
    cin>>tmp;

    for(int i = 0; i< tmp; i++) {
        cout << "Введите ФИО:\n";
        cin >> surname;
        cin >> name;
        cin >> middle_name;


        client.setValue(surname, name, middle_name);
    }
    client.getDate(tmp);
    system("pause");
    return 0;
}