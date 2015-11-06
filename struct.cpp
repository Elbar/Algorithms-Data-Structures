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
    int diffDate;
};





void show_struct(struct bank client[], int size)

{
    cout<<"--------------------------------------------------------------------------------";
    cout<<"\n";

    for(int i = 0;i < size;i++) {



        cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].lastname<<" | "
        <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].diffDate;
            cout<<endl;

        }
        cout<<"--------------------------------------------------------------------------------";

        cout<<"\n"<<endl;
    }



void sortValues(struct bank client[],int size ){
    char* str;
    char* str2;
    char* str3;
  int i;
    int j;
    for (i=0;i<=size;i++)
    {
        for (j=1;j<size;j++)
        {
            if (strcmp(client[i].surname, client[i].surname)>0)
            {

                strcpy(str, client[i].surname);
                strcpy( client[i-1].surname,  client[i].surname);
                strcpy(client[i].surname, str);

            }
            if(strcmp(client[i].name, client[i].name)>0){
                strcpy(str2, client[i].name);
                strcpy(client[i-1].name, client[i].name);
                strcpy(client[i].name, str2);


            }
            if(strcmp(client[i].lastname, client[i].lastname)>0){
                strcpy(str, client[i].lastname);
                strcpy(client[i-1].lastname, client[i].lastname);
                strcpy(client[i].lastname, str);

            }

        }


    }
    cout<<"--------------------------------------------------------------------------------";
    cout<<"\n";

    for(int i = 0;i < size;i++) {



        cout<<" | "<<client[i].surname<<" | "<<client[i].name<<" | "<<client[i].lastname<<" | "
        <<client[i].account<<" | "<<client[i].accountNumber<<" | "<<client[i].diffDate;
        cout<<endl;

    }
    cout<<"--------------------------------------------------------------------------------";

    cout<<"\n"<<endl;

}
int  main()
{
    bank client[128];
    int i,j,n;

    cout<<"Count of clients: ";
    cin>>n;
    int tmp = n;
    for (i=0;i<n;i++)
    {
        cout<<"Surname,Name & Last name of client(via space) №"<<i+1<<":\n ";
        cin>>client[i].surname>>client[i].name>>client[i].lastname;

        cout<<"Account Number & Bank account  of client(via space)"<<":\n ";
        cin>>client[i].accountNumber>>client[i].account;

        cout<<"Last Modified"<<":\n ";
        cin>>client[i].diffDate;
    }

    show_struct(client, tmp);
    cout<<"Sorted values\n";
    sortValues(client,tmp);

}