#include <iostream>
#include <iomanip>
#include <string.h>
#include "struct.h"

using  namespace std;
/**
 * Prototypes of functions
 */
int  inputValues(struct bank client[], int size);
void show_struct(struct bank client[], int size);
void searchValue(struct bank client[], int result);
void alphaSort (bank client[], int size);
char linearSearch (bank client[], const string name,int size);
void positiveanswer();



int  inputValues(struct bank client[], int size){
    int i;
for (i=0;i<size;i++)
{
        cout<<"Surname,Name & Last name of client(via space) №"<<i+1<<":\n ";
        cin>>client[i].surname>>client[i].name>>client[i].lastname;

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



        cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].lastname<<" | "
        <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].day<<"."<<client[i].month<<"."<<client[i].year;
            cout<<endl;

        }
        cout<<"--------------------------------------------------------------------------------";

        cout<<"\n"<<endl;
    }

void searchValue(struct bank client[], int result) {
    cout << "--------------------------------------------------------------------------------";
    cout << "\n";


    cout << " | " << client[result].surname << " | " << client[result].name << " | " << client[result].lastname << " | "
    << client[result].account << " | " << client[result].accountNumber << " | " << client[result].day << "." <<
    client[result].month << "." << client[result].year;
    cout << endl;
    cout << "--------------------------------------------------------------------------------";

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



            cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].lastname<<" | "
            <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].day<<"."<<client[i].month<<"."<<client[i].year;
            cout<<endl;

        }
        cout<<"--------------------------------------------------------------------------------";

        cout<<"\n"<<endl;
    }
}


char linearSearch (bank client[], const string name,int size) {
    bank temp;
    for (int i = 0; i < size; ++i) {
        if (client[i].name == name) {
            return i;

        }


    }

    return -1;
}

void positiveanswer(){
    cout<<"Let's input your search value... : ";
}




int  main()
{
    bank client[128];

    char userValue[10];
    int n;
    cout<<"Count of clients: ";
    cin>>n;
    int tmp = n;

    inputValues(client, tmp);
    show_struct(client, tmp);
    cout<<"After sorting\n";
    alphaSort(client, tmp);





    cout<<"Do you want to search person by name and her position:"<<endl;
    cout<<"1. Yes\n";
    cout<<"2. No\n";
   int input;
    cin>>input;
    switch(input){
        case 1:
            positiveanswer();

        case 2:
            break;


    }

    cin>>userValue;
    int result;
    result = linearSearch(client,userValue,tmp);
    if(result >= 0)
    {
        cout<<"The name "<<userValue<<" was found at position "<<"{"<<result<<"}\n";
        searchValue(client, result);




    } else
    {
        cout<<"The  "<<userValue<<" was not found.";
    }


}

