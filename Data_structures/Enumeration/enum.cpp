//
// Created by root on 12/2/15.
//

#include <iostream>
using namespace std;

enum bankClients { David,Mike, Steve, Andrew };

int main() {

    bankClients b;

    b = David;
    cout<<"David = "  << b << endl;

    b = Mike;
    cout << "Mike = " << b << endl;

    b = Steve;
    cout << "Steve = " << b << endl;

    b = Andrew;
    cout << "Andrew = " << b << endl;

    return 0;
}