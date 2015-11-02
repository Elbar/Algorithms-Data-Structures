//
// Created by root on 11/2/15.
//

#ifndef LABS_INSTACK_H
#define LABS_INSTACK_H

class IntStack
{
private:
    int *stackArray;
    int stackSize;
    int top;


public:
    IntStack(void);
    void push(int);
    void pop(int &);
    bool isFull(void);
    bool isEmpty(void);
};

#endif //LABS_INSTACK_H
