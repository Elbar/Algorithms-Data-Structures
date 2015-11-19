#include<iostream>
#include <string.h>

using namespace std;

class bank
{
private:
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
            cout<<"Surname,Name & Last name of client(via space) №"<<i+1<<":\n ";
            cin>>client[i].surname>>client[i].name>>client[i].middle_name;

            cout<<"Account Number & Bank account  of client(please input 10 characters via space)"<<":\n ";
            cin>>client[i].accountNumber>>client[i].account;

            cout<<"Last Modified(dd-mm-yyyy)"<<":\n ";
            cin>>client[i].day>>client[i].month>>client[i].year;
        }

    }


    void show_struct(struct bank client[], int size)

    {
        cout<<"--------------------------------------------------------------------------------";
        cout<<"\n";

        for(int i = 0;i < size;i++) {



            cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].middle_name<<" | "
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
            cout<<"--------------------------------------------------------------------------------";
            cout<<"\n";

            for(int i = 0;i < size;i++) {



                cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].middle_name<<" | "
                <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].day<<"."<<client[i].month<<"."<<client[i].year;
                cout<<endl;

            }
            cout<<"--------------------------------------------------------------------------------";

            cout<<"\n"<<endl;
        }
    }


    int  linearSearch (bank client[], const string name,int size) {
        bank temp;
        for (int i = 0; i < size; ++i) {
            if (client[i].name == name) {
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

    cout<<"Do you want to search person by name and her position:"<<endl;
    cout<<"1. Yes\n";
    cout<<"2. No\n";
    int input;
    cin>>input;
    switch(input){
        case 1:
            client->positiveanswer();

        case 2:
            break;


    }

    cin>>userValue;
    int result;
    result = client->linearSearch(client,userValue,size);
    if(result >= 0)
    {
        cout<<"The name "<<userValue<<" was found at position "<<"{"<<result<<"}\n";
        client->searchValue(client, result);




    } else
    {
        cout<<"The  "<<userValue<<" was not found.";
    }


}
