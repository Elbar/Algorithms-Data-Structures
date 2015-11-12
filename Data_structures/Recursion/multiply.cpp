//
// Created by root on 11/12/15.
//
#include<iostream>

using namespace std;
int multiply(int m, int n);

int multiply(int m , int n){
    int ans;

    if(n == 1)
    {
        ans = m;
    }
    else
    {
        ans = m + multiply(m, n-1);
        return ans;
    }


}

int main() {


    cout<<multiply(1,2);

}


