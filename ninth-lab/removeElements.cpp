#include<iostream>
using namespace std;

int main() {

    int pos;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// delete 3 (index 2)
    cin>>pos;
    for (int i = 0 ; i < 8; ++i){
        array[pos] = array[i + 1]; // copy
        cout<<" "<<array[i];
        }

}
