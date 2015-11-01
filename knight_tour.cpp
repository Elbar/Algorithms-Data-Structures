//
// Created by root on 11/1/15.
//
#include<iostream>
#define n 8
#include<iomanip>

using namespace std;


int main(){
    int s =0 ;
    int a[n][n];
    int step = 0;

    for(int i =0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 1;

            cout << setw(3)<<"a[" <<i <<"] "<<"["<<j<<"] "<< a[i][j];
        }
        cout<<endl;
    }
    cout<<"--------------------------------------------";
    cout<<"--------------------------------------------";

    cout<<endl;

    int knight = a[0][3] = 1;
    for(int i=0 ; i<n; i++){
        for(int j =0; j<n;j++) {
            if (a[i][j+2] + a[i+2][j+2] + a[i+2][j+3] + a[i+1][j] == 0 && knight) {
                    a[i][j] = 1;

            }
            cout << setw(3) << "a[" << i << "] " << "[" << j << "] "<< a[i][j];


        }
        cout<<endl;
        }









};
