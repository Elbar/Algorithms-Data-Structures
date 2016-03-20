#include <iostream>
#include <fstream>
#include <iomanip>
#include <stack>
#include<vector>

using namespace std;

int main() {
    stack<int> myStack;
    vector<int> v;

    int valueArray[100], min = 0, max = 0;
    fstream F;
    F.open("/root/ClionProjects/labs/ninth-lab/file.txt");

    char number;
    int value;
    do {
        cout << "1. Add elements" << endl;
        cout << "2. Delete elements" << endl;
        cout << "3. Take a last number" << endl;
        cout << "4. Define a number of stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Number of command > ";
        cin >> number;
        switch (number) {
            case '1':
                if (F) {
                    while (!F.eof()) {
                        F >> value;
                        cout << value << "\t";
                        number++;
                        myStack.push(value);
                    }
                    F.close();
                    cout << "n=" << number << endl;
                } else cout << " Файл не существует" << endl;
                break;

            case '2':
                if (myStack.empty() == true) cout << "\nStack is empty\n\n";
                if (F) {
                    while (F.is_open()) {
                        for (int i = 0; i < myStack.size(); i++) {
                            F >> v[i];
                            if (v[i] < min) {
                                 min = v[i];
                             }
                             if (v[i] > max) {
                                 max = v[i];
                             }
                            cout << v[i];
                            myStack.push(v[i]);
                        }
                    }
                }
                cout<<myStack.top();
                myStack.pop();
                cout << endl << "Element has deleted from stack\n\n";
                break;


            case '3':
                if (myStack.empty() == true) cout << "\nStack is empty\n\n";
                else cout << "\nTop element of stack: " << myStack.top() << "\n\n";
                break;

            case '4':
                if (myStack.empty() == true) cout << "\nStack is empty\n\n";
                else cout << "\nSize of stack: " << myStack.size() << "\n\n";
                break;
            case '0':
                break;
            default:
                cout << endl << "Undefined command\n\n";
                break;
        }
    } while (number != '0');

}


