//
// Created by root on 11/18/15.
//

#ifndef LABS_BANK_H
#define LABS_BANK_H
#include<string>
#include<iostream>
using namespace std;


class bank {

private:
    string surname;
    string name;
    string middle_name;
    int accountNumber;
    int account;
    double day;
    double month;
    int year;

public:
        void set_name(string student_name) {
            name = student_name;
        }

        string get_name() {
            return name;
        }

        void set_surname(string client_surname) {
            surname = client_surname;

        }

        string get_surname() {
             return surname;
    }

         void set_middle_name(string client_middle_name) {
           middle_name = client_middle_name;

    }

            string get_middle_name() {
                return middle_name;
            }

    void inputValues(bank client[], int size){
        int i;
        for (i=0;i<size;i++)
        {
            cout<<"Surname,Name & Last name of client(via space) №"<<i+1<<":\n ";
            cin>>client[i].surname>>client[i].name>>client[i].middle_name;

            cout<<"Account Number & Bank account  of client(please input 10 characters via space)"<<":\n ";
            cin>>client[i].accountNumber>>client[i].account;

            cout<<"Last Modified(dd-mm-yyyy)"<<":\n ";
            cin>>client[i].day>>client[i].month>>client[i].year;
        }

    }



};


#endif //LABS_BANK_H
