#include <iostream>
using namespace std;



template <class t>
void input(t arr, int n){

    for(int i = 0; i< n; i++){
        cin>>arr[i];


    }
}

template <class t>

void show(t arr,int n) {
    for(int i = 0 ; i< n; i++){
        cout<<" "<<arr[i];
    }
}

template <class t>
void swap(t arr, int n){


                for ( int i = 0; i < n ; i++) {

                    if(arr[i] == 1) {
                        arr[i] =arr[i+1] * arr[i + 2];

                    }
                    cout << " " << arr[i];


                 }

            }

           int main() {

               int  size;

               cout<<"Please input a count of elements in array...";
               cin>>size;

               int  arr[size];

               input(arr, size);
               show(arr, size);
               cout<<endl;
               swap(arr, size);
               return 0;


           }