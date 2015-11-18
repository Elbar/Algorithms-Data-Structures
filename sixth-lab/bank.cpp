//
// Created by root on 11/18/15.
//

#include "bank.h"
#include<iostream>

using namespace std;
int main()
{
    bank client ;

    string name;
    string surname;
    string middle_name;





    cout << "Last name: ";
    getline(cin, surname);
    cout << "Name: ";
    getline(cin, name);
    cout << "Middle name: ";
    getline(cin, middle_name);


    client.set_surname(surname);
    client.set_name(name);
    client.set_middle_name(middle_name);



    return 0;
}



