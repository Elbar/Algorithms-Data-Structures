#include <iostream>
#include <fstream>
#include <iomanip>
#include <stack>

using namespace std;

int main() {

    stack<int> myStack;


    fstream F;
    F.open("/root/ClionProjects/labs/ninth-lab/file.txt");

    char number; int value;
    do
    {
        cout<<"1. Add element"<<endl;
        cout<<"2. Delete element"<<endl;
        cout<<"3. Take a last number"<<endl;
        cout<<"4. Define a number of stack"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Number of command > "; cin>>number;
        switch (number) {
            case '1':

                if (F) {
                    while (!F.eof()) {
                        F >> value;
                        cout << value << "\t";
                        number++;
                        myStack.push(value);  }
                    F.close();
                    cout << "n=" << number << endl;
                } else cout << " Файл не существует" << endl;
                break;
//-----------------------------------------------
            case '2':
                if (myStack.empty()==true) cout<<"\nStack is empty\n\n";
                else
                {
                    myStack.pop(); cout<<endl<<"Element has deleted from stack\n\n";
                } break;
//-----------------------------------------------
            case '3':
                if (myStack.empty()==true) cout<<"\nStack is empty\n\n";
                else cout<<"\nTop element of stack: "<<myStack.top()<<"\n\n";
                break;
//-----------------------------------------------
            case '4':
                if (myStack.empty()==true) cout<<"\nStack is empty\n\n";
                else cout<<"\nSize of stack: "<<myStack.size()<<"\n\n";
                break;
//-----------------------------------------------
            case '0': break;
            default: cout<<endl<<"Undefined command\n\n";
                break;
        }
    } while(number!='0');

}

