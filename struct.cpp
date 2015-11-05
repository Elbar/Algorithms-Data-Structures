#include <iostream>
#include <string.h>

using namespace std;
struct sotr
{
    char familia[20];
    int day;
    int mesac;
    int year;
};
int  main()
{
    sotr sot[128];
    int i,j,a,m;
    char* str;
    cout<<"Введите колличество сотрудников: ";
    cin>>a;
    for (i=0;i<a;i++)
    {
        cout<<"\nФамилия сотрудника №"<<i+1<<": ";
        cin>>sot[i].familia;
        cout<<"\nДень рождения сотрудника "<<sot[i].familia<<": ";
        cin>>sot[i].day;
        cout<<"\nМесяц рождения сотрудника "<<sot[i].familia<<": ";
        cin>>sot[i].mesac;
        cout<<"\nГод рождения сотрудника "<<sot[i].familia<<": ";
        cin>>sot[i].year;
    }
    for (j=0;j<=a;j++)
    {
        for (i=1;i<a;i++)
        {
            if (strcmp(sot[i-1].familia, sot[i].familia)>0)
            {

                strcpy(str, sot[i-1].familia);
                strcpy(sot[i-1].familia, sot[i].familia);
                strcpy(sot[i].familia, str);

                m=sot[i-1].day;
                sot[i-1].day=sot[i].day;
                sot[i].day=m;

                m=sot[i-1].mesac;
                sot[i-1].mesac=sot[i].mesac;
                sot[i].mesac=m;

                m=sot[i-1].year;
                sot[i-1].year=sot[i].year;
                sot[i].year=m;
            }
        }
    }
    for (i=0;i<a;i++)
    {
        cout<<sot[i].familia<<endl;
        cout<<sot[i].day<<endl;
        cout<<sot[i].mesac<<endl;
        cout<<sot[i].year<<endl<<endl;
    }
}