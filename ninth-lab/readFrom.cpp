//
// Created by root on 12/25/15.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int valueArray[100], min = 0, max = 0;
    fstream F;
    F.open("/root/ClionProjects/labs/ninth-lab/file.txt");

    if (F.is_open()) {
        for (int i = 0; i < 100 ;i++) {
            F >> valueArray[i];

            if (valueArray[i] < min) {
                min = valueArray[i];
            }
            if (valueArray[i] > max) {
                max = valueArray[i];
            }
        }
    }
    for (int i = 0 ; i < 100; ++i){
        if() {
            valueArray[i] = 0; // copy
            cout << " " << valueArray[i];
        }
    }

    cout << max << " " << min;

    return 0;
}
