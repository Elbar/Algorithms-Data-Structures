#include <iostream>
using namespace std;


template <class t>
t input(t arr[], int n){

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
}

template <class t>
t  show(t arr[],int n) {
    for(int i = 0 ; i< n; i++){
        cout<<" "<<arr[i];
    }
}

template <class t>
t bubblesort(t *arr, int n){
    t temp ;
    for (int i = n - 1 ; i >= 0 ; --i) {
        for(int j = 0; j < i; ++j)
             if(arr[i] > arr[j]) {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;

        }
        cout << " " << arr[i];
    }
}

template <class t>
t quicksort(t *arr, int left, int right) {
    t i = left, j = right, temp, p;
    p = arr[(left + right) / 2];

    do {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;


        if(i <= j){
            temp = arr[i]; arr[i] = arr[j]; arr[j] = temp; i++; j--; }}

    while(i <= j);
    if(j > left) quicksort(arr, left, j);
        if(j > left) quicksort(arr, i, right);

    }


int main() {

    int size;
    int arr[size];
    float array[size];

    cout<<"Please choice a number whatever you want\n";
    cout<<"1. integer\n";
    cout<<"2. float \n";
    cout<<">>";
    int choice;
    cin>>choice;

    switch (choice) {
        case 1:
            cout << "Please input a count of elements in array\n";
            cout<<">>";

            int size;
            cin >> size;
            cout << "First version:\n >>";
            input(arr, size);
            show(arr, size);
            cout << endl;
            bubblesort(arr, size);

            break;

        case 2:
            cout << "Please input a count of elements in array\n >>";
            cin >> size;
            cout << "Second version:\n >>";
            input(array, size);
            show(array, size);
            cout << endl;
            bubblesort(array, size);

            return 0;
        default:
            break;
    }

    cout<<"Quicksort";
    int sizeofE;
    cin>> sizeofE;
    input(arr, sizeofE);

    cout<<"Input left & right position";

    int left, right;
    cout<<"Left";
    cin>>left;
    cout<<"Right";
    cin>>right;
    quicksort(arr, left, right);
}