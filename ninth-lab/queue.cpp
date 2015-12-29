#include <queue>
#include <iostream>

int const n = 10;
using namespace std;
queue<int> myQueue;

int main() {
    int a[n], b[n], max = b[0], min = b[0], k;


    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100 - 50;
        myQueue.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        b[i] = myQueue.front();
        myQueue.pop();
        cout << " " << b[i];
    }

    for (int i = 0; i < n; i++) {
        if (max < b[i]) {
            max = b[i];
        }
    }
    cout << "\nmax = " << max;

    for (int i = 0; i < n; i++) {
        if (min > b[i]) {
            min = b[i];
        }
    }

    cout << "\nmin = " << min;

    for (int i = 0; i < n; i++) {
        if (max == b[i]) {
            k = b[i] * b[i];
            queue<int> myQueue2;
            myQueue2.push(k);
            myQueue2.pop();

        }
    }


}