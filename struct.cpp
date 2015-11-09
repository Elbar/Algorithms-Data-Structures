#include <iostream>
#include <iomanip>
#include <string.h>

using  namespace std;
void show_struct(struct bank client[], int size);

struct bank
{
    char surname[20];
    char name[10];
    char lastname[15];
    int accountNumber;
    int account;
    double day;
    double month;
    int year;
};


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


void Alphasort (bank client[], int size)
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


int  main()
{
    bank client[128];
    int n;
    cout<<"Count of clients: ";
    cin>>n;
    int tmp = n;

    inputValues(client, tmp);
    show_struct(client, tmp);
    cout<<"After sorting\n";
    Alphasort(client, tmp);


}