

#include<iostream>
#include <string.h>
using  namespace std;

bool palindrom( char * str) {
    int left_index = 0;
    int right_index = strlen(str)-1;


    while( left_index < right_index )
        if( str[left_index++]!= str[right_index--])
            return false;

    return true;
};


int main() {

    cout<<palindrom("asa"); // return 1


}
