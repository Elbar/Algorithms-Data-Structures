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
t swap(t arr[], int n){
    for ( int i = 0; i < n ; i++) {
        if(arr[i] == 1) {
            arr[i] =arr[i+1] * arr[i + 2];
        }
        cout << " " << arr[i];

    }
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
                swap(arr, size);
                break;

            case 2:
                cout << "Please input a count of elements in array\n >>";
                cin >> size;
                cout << "Second version:\n >>";
                input(array, size);
                show(array, size);
                cout << endl;
                swap(array, size);
                return 0;
            default:
                break;
        }
 }