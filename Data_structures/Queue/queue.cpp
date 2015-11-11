//
// Created by root on 11/11/15.
//

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string>myQueue;

    myQueue.push("No pain");
    myQueue.push("-no gain");

    cout<<"Count of elements in queue : "<<myQueue.size()<<endl;
    cout<<"There are these :"<<myQueue.front()<<myQueue.back();


    myQueue.pop();
    cout<<"\n Now in queue has a one element"<<myQueue.front();
    return 0;



}
