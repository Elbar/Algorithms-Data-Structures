#include <queue>
#include <iostream>
#include <string.h>

using namespace std;
queue<int> myQueue;
char  const n = 5;
int main() {
    char  a[n], b[n]; //max = b[0], min = b[0], k;

    cout<<"введите данные: ";
    for (int i = 0; i < n; i++) {
        //a[i] = rand() % 100 - 50;
        cin>>a[i];
        myQueue.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        b[i] = (char) myQueue.front();
        myQueue.pop();
        cout << " " << b[i];
    }


    for(int i =0 ; i< n;){
        int left_index = 0;
        int right_index = (int) (strlen(b)-1);


        while( left_index < right_index )
            if( b[left_index++]!= b[right_index--])
                return false;

        cout<< "\nThis is palindrom";
        return true;


    }

/*    for (int i = 0; i < n; i++) {
//        if (max < b[i]) {
//            max = b[i];
//        }
//    }
//    cout << "\nmax = " << max;
//
//    for (int i = 0; i < n; i++) {
//        if (min > b[i]) {
//            min = b[i];
//        }
//    }
//
//    cout << "\nmin = " << min;

//    for (int i = 0; i < n; i++) {
//        if (max == b[i]) {
//            k = b[i] * b[i];
//            queue<int> myQueue2;
//            myQueue2.push(k);
//            myQueue2.pop();
//
//        }
    //}

    */


}