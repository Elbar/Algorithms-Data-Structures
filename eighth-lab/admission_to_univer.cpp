#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;


struct address {
    int  homeNumber;
    char street[10];
};
struct  faculty {
    char group[10];
    int course;
};


struct univer
{
    char surname[20];
    char name[10];
    struct  faculty faculty1;
    struct address address1;
    float  point;
    char city[20];


};



 int  inputValues(struct univer univer1[], int size){
    int i;
    for (i=0;i<size;i++)
    {
        cout<<"Surname, Name & City of Student №"<<i+1<<":\n ";
        cin>>univer1[i].surname>>univer1[i].name>>univer1[i].city;

        cout<<"Faculty(Group and course) & Point"<<":\n ";
        cin>>univer1[i].faculty1.group>>univer1[i].faculty1.course>>univer1[i].point;


        cout<<"Full Address(street number)"<<":\n ";
        cin>>univer1[i].address1.street>>univer1[i].address1.homeNumber;

    }

}


void  show(struct univer univer1[], int size){
    int i;

        cout<<"--------------------------------------------------------------------------------";
        cout<<"\n";

        for(int i = 0;i < size;i++) {

            cout<<" | "<<univer1[i].surname<<" | "<<univer1[i].name<<" | "<<univer1[i].city<<" | "
            <<univer1[i].faculty1.group<<"-"<<univer1[i].faculty1.course<<" | "<<univer1[i].point<<"|"<<univer1[i].address1.street<<" "<<univer1[i].address1.homeNumber;
            cout<<endl;

        }
        cout<<"--------------------------------------------------------------------------------";

        cout<<"\n"<<endl;

    }

void searchValue(struct univer univer1[], int result) {
    cout << "--------------------------------------------------------------------------------";
    cout << "\n";


    cout << " | " << univer1[result].surname << " | " << univer1[result].name << " | " << univer1[result].city << " | "
    << univer1[result].faculty1.group << " | " << univer1[result].faculty1.course << " | " << univer1[result].point << "." <<
    univer1[result].address1.street<< "." << univer1[result].address1.homeNumber;
    cout << endl;
    cout << "--------------------------------------------------------------------------------";

}



void bubble_sort (univer univer1[], int size) {
    int i;
    univer temp;

    for (int i = size - 1 ; i >= 0 ; --i) {
        for(int j = 0; j < i; ++j)
            if (univer1[i].point >= 8.5) {
                temp = univer1[i];
                univer1[i] = univer1[j];
                univer1[j] = temp;
            }
    }

            cout << "--------------------------------------------------------------------------------";
            cout << "\n";

            for (i = 0; i < size; i++) {


                cout << " | " << univer1[i].surname << " | " << univer1[i].name << " | " << univer1[i].city << " | "
                << univer1[i].faculty1.group << "-" << univer1[i].faculty1.course << " | " << univer1[i].point << "|" <<
                univer1[i].address1.street << " " << univer1[i].address1.homeNumber;
                cout << endl;

            }
            cout << "--------------------------------------------------------------------------------";

            cout << "\n" << endl;
        }
/*
void fun()
{


    printf("fun() starts \n");
    printf("Press enter to stop fun \n");
    while(1)
    {
        if (getchar())
            break;
    }
    printf("fun() ends \n");
}


 */


int main()
{
    /**
     *
    clock_t t;
    t = clock();
    fun();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;

     */

    univer university[128];
    int n;
    cout<<"Count of students: ";
    cin>>n;
    int tmp = n;

    inputValues(university, tmp);
    show(university, tmp);
    bubble_sort(university, tmp);

}
