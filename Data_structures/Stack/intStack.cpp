//
// Created by root on 11/2/15.
//
#include "intStack.h"
#include<iostream>

//********************
// Constructor
//********************


intStack::intStack(int size){
    stackArray = new int[size];
    stackSize = size;
    top = -1;

}

//***************************
// Member function push pushes the argument onto
// the stack
//***************************

void intStack::push(int num){
    if(isFull()){
        cout<<"The stack is full. \n";
    }
    else{
        top++;
        stackArray[top] = num;
    }
}
