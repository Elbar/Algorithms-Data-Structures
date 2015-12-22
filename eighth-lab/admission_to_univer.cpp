#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;


struct address {
    int homeNumber;
    char street[10];
};
struct faculty {
    char group[10];
    int course;
};


struct univer {
    char surname[20];
    char name[10];
    struct faculty faculty1;
    struct address address1;
    int point;
    char city[20];


};


int inputValues(struct univer univer1[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << "Surname, Name & City of Student №" << i + 1 << ":\n ";
        cin >> univer1[i].surname >> univer1[i].name >> univer1[i].city;

        cout << "Faculty(Group and course) & Point" << ":\n ";
        cin >> univer1[i].faculty1.group >> univer1[i].faculty1.course >> univer1[i].point;


        cout << "Full Address(street number)" << ":\n ";
        cin >> univer1[i].address1.street >> univer1[i].address1.homeNumber;

    }

}


void show(struct univer univer1[], int size) {
    int i;

    cout << "--------------------------------------------------------------------------------";
    cout << "\n";

    for (int i = 0; i < size; i++) {

        cout << " | " << univer1[i].surname << " | " << univer1[i].name << " | " << univer1[i].city << " | "
        << univer1[i].faculty1.group << "-" << univer1[i].faculty1.course << " | " << univer1[i].point << "|" <<
        univer1[i].address1.street << " " << univer1[i].address1.homeNumber;
        cout << endl;

    }
    cout << "--------------------------------------------------------------------------------";

    cout << "\n" << endl;

}

void searchValue(struct univer univer1[], int result) {
    cout << "--------------------------------------------------------------------------------";
    cout << "\n";


    cout << " | " << univer1[result].surname << " | " << univer1[result].name << " | " << univer1[result].city << " | "
    << univer1[result].faculty1.group << " | " << univer1[result].faculty1.course << " | " << univer1[result].point <<
    "." <<
    univer1[result].address1.street << "." << univer1[result].address1.homeNumber;
    cout << endl;
    cout << "--------------------------------------------------------------------------------";

}


void bubble_sort(univer univer1[], int size) {
    int i;
    univer temp;

    printf("bubblesort starts \n");

    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j >= 0; j--)
            if (univer1[i].point > univer1[j].point) {
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
    printf("bubblesort() ends \n");

}

void select_sort(univer univer1[], int size) {
    int i, j, k;


    printf("selectsort starts \n");

    for (i = 0; i < size; i++) {
        k = i;
        for (j = i + 1; j <= size; j++)
            if (univer1[j].point < univer1[k].point) {
                k = univer1[k].point;
                univer1[k].point = univer1[i].point;
                univer1[i].point = k;

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
    printf("selectsort() ends \n");
}

/*
void merge_sort(univer univer1[], int l = 0, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    create temp arrays
    univer left[n1], right[n2];

    Copy data to temp arrays L[] and R[]
    for(i = 0; i < n1; i++)
        left[i] = univer1[l + i];
    for(j = 0; j < n2; j++)
        right[j] = univer1[m + 1+ j];

     Merge the temp arrays back into arr[l..r]

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (left[i].point <= right[j].point)
        {
            univer1[k] = left[i];
            i++;
        }
        else
        {
            univer1[k] = right[j];
            j++;
        }
        k++;
    }

     Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        univer1[k] = left[i];
        i++;
        k++;
    }

     Copy the remaining elements of R[], if there are any
    while (j < n2)
    {
        univer1[k] = right[j];
        j++;
        k++;
    }
}

l is for left index and r is right index of the sub-array
  of arr to be sorted
void mergeSort(univer univer1[],  int l, int r)
{

    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(univer1, l, m);
        mergeSort(univer1,  m+1, r);
        merge_sort(univer1, l, m, r);

        printf("mergesort() ends \n");

    }
}
*/



int main() {
    univer university[128];
    int n;
    cout << "Count of students: ";
    cin >> n;
    int tmp = n;

    inputValues(university, tmp);
    show(university, tmp);

    clock_t t;
    t = clock();
    bubble_sort(university, tmp);
    t = clock() - t;
    double time_taken = ((double) t) / CLOCKS_PER_SEC;

    printf("bubblesort() took %f seconds to execute \n", time_taken);
    printf("------------------------------------------------------------------------");
    printf("\n");

    clock_t time1;
    time1 = clock();
    select_sort(university, tmp);
    time1 = clock() - time1;
    double time_taken1 = ((double) time1) / CLOCKS_PER_SEC;

    printf("selectsort() took %f seconds to execute \n", time_taken1);

   /* clock_t time2;
    time2 = clock();
    merge_sort(university, tmp);
    time2 = clock() - time2;
    double time_taken2 = ((double) time2) / CLOCKS_PER_SEC;

    printf("mergesort() took %f seconds to execute \n", time_taken2);
    printf("------------------------------------------------------------------------");
    printf("\n");
  */
    return 0;



}
