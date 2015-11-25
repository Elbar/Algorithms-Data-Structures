//
// Created by root on 11/24/15.
//

#include<iostream>
#include <stdlib.h>

int const n = 10;



using namespace std;


template<class t>

t func(t a[], int n){
    t temp;

    for(int i = 0 ;i < n; i++){

        if(a[i] == 1){
            temp = a[i] * a[i + 1];
            a[i] =  temp;


        }


        cout<<" "<<a[i];

    }
    cout<<endl;
}

template <class  t>

 void show(t a[], int n){

    for(int i = 0; i< n; i++){
        cout<<' '<<a[i];

    }
    cout<<endl;
}




int main() {



    int a[n];
    int i;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand()% 10 ;
         func(a, n);
    }
    cout << endl;


    show(a, n);
}
