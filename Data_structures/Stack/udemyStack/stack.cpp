//
// Created by root on 11/11/15.
//

#include "stack.h"

#include <iostream>
#include <stack>


using namespace std;

int main()
{
    stack<int> myStack;


    myStack.push(5);
    myStack.push(3);
    myStack.push(2);


    cout<<"The number of ints on the stack"<<myStack.size()<<endl;


    while(!myStack.empty()){
    cout<<"popping "<<myStack.top()<<endl;
    myStack.pop();
    }
    cout<<"The number of ints on the stack"<<myStack.size()<<endl;


}