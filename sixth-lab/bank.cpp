#include<iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class bank
{
private:
        int id ;
        char surname[10];
        string name;
        string middle_name;
        int account;
        int accountNumber;
        double day;
        double month;
        int year;

public:


    int  inputValues( bank client[], int size){
        int i;
        for (i=0;i<size;i++)
        {
            cout<<"ID, Surname,Name & Last name of client(via space) №"<<i+1<<":\n ";
            cin>>client[i].id>>client[i].surname>>client[i].name>>client[i].middle_name;

            cout<<"Account Number & Bank account  of client(please input 10 characters via space)"<<":\n ";
            cin>>client[i].accountNumber>>client[i].account;

            cout<<"Last Modified(dd-mm-yyyy)"<<":\n ";
            cin>>client[i].day>>client[i].month>>client[i].year;

        }


    }

    void show_struct(bank client[], int size)

    {
          cout<<"--------------------------------------------------------------------------------";
          cout<<"\n";
          cout<<"ID"<<"|"<<"Surname"<<setw(3)<<"|"<<"Name"<<setw(3)<<"|"<<"Middle name"<<setw(5)<<"|"<<"Account"<<setw(3)<<"|"<<"AccountNumber"<<setw(3)<<"|"<<"dd-mm-yyy"<<endl;
          cout<<"--------------------------------------------------------------------------------"<<endl;
        for(int i = 0;i < size;i++) {

              cout<<client[i].id<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].middle_name<<" | "
              <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].day<<"."<<client[i].month<<"."<<client[i].year;
              cout<<endl;

        }
         cout<<"--------------------------------------------------------------------------------";

         cout<<"\n"<<endl;
    }



    void alphaSort (bank client[], int size)
    {
        int j, i;
        bank temp;
        for(i = 0; i < size - 1; i++)
        {
            for(j = i + 1; j < size; j++)
            {
                if(strcmp(client[i].surname,client[j].surname) > 0)
                {
                    temp = client[i];
                    client[i] = client[j];
                    client[j] = temp;
                }
            }
        }


        {
            cout<<"\n";
            cout<<"--------------------------------------------------------------------------------";
            cout<<"\n";
            cout<<"ID"<<"|"<<"Surname"<<setw(3)<<"|"<<"Name"<<setw(3)<<"|"<<"Middle name"<<setw(3)<<"|"<<"Account"<<setw(3)<<"|"<<"AccountNumber"<<setw(3)<<"|"<<"dd-mm-yyy"<<endl;
            cout<<"--------------------------------------------------------------------------------"<<endl;

            for(int i = 0;i < size;i++) {



                cout<<client[i].id<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].middle_name<<" | "
                <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].day<<"."<<client[i].month<<"."<<client[i].year;
                cout<<endl;

            }
            cout<<"--------------------------------------------------------------------------------";

            cout<<"\n"<<endl;
        }
    }


    int  linearSearchByName(bank *client, const string name, int size) {

        for (int i = 0; i < size; ++i) {
            if (client[i].name == name) {
                return i;

            }
        }

        return -1;
    }

    int linearSearchById(bank client[], const int id,int size){


        for (int i = 0; i < size; ++i) {
            if (client[i].id == id) {
                return i;

            }
        }

        return -1;
    }



    void searchValue( bank client[], int result) {
        cout << "--------------------------------------------------------------------------------";
        cout << "\n";


        cout << " | " << client[result].surname << " | " << client[result].name << " | " << client[result].middle_name << " | "
        << client[result].account << " | " << client[result].accountNumber << " | " << client[result].day << "." <<
        client[result].month << "." << client[result].year;
        cout << endl;
        cout << "--------------------------------------------------------------------------------";

    }
    void positiveanswer(){
        cout<<"Let's input your search value... : ";
    }


};

int main()
{
    bank client[128];
     int size;
    cout<<"Input a count of clients:";
    cin>> size;
    client->inputValues(client, size);
    client->show_struct(client, size);
    client->alphaSort(client, size);


    char userValue[10];
    int choice;

        cout<<"Do you want to search person by name and her position or search by id?"<<endl;
        cout<<"1.By name: \n";
        cout<<"2.By id: \n";
        cout<<"3.None of them\n";
        int input;
        cin>>input;
    switch(input){
        case 1:
            client->positiveanswer();

            cin>>userValue;
            int result;
            result = client->linearSearchByName(client, userValue, size);
            if(result >= 0)
            {
                cout<<"The name "<<userValue<<" was found at position "<<"{"<<result<<"}\n";
                client->searchValue(client, result);

            } else
            {
                cout<<"The  "<<userValue<<" was not found.";
            }
            break;

        case 2:
            client->positiveanswer();
            cin>>choice;

            result = client->linearSearchById(client,choice, size);
            if(result >= 0)
            {
                cout<<"The id "<<choice <<" was found at position "<<"{"<<result<<"}\n";
                client->searchValue(client, result);

            } else
            {
                cout<<"The  "<<userValue<<" was not found.";
            }
        case 3:
            break;


    }
}
