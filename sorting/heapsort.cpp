//
// Created by root on 12/23/15.
//



#include <iostream>
#include <algorithm>
#define NMAX 50001
using namespace std;
int arr[NMAX+1];

void heapify (int pos, int n) {
    while (2 * pos + 1 < n) {

        int t = 2 * pos +1;
        if (2 * pos + 2 < n && arr[2 * pos + 2] >= arr[t])
        {
            t = 2 * pos + 2;
        }
        if (arr[pos] < arr[t]) {
            swap(arr[pos], arr[t]);
            pos = t;
        }
        else break;

    }
}

void heap_make(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        heapify(i, n);
    }
}
void heap_sort(int n)
{
    heap_make(n);
    while(n>0)
    {
        swap(arr[0],arr[n-1]);
        n--;
        heapify(0,n);
    }
}

int main()
{

    int n;
    cin>>n;
    for(int i = 0; i < n; i ++)
    {
        cin>> arr[i];
    }
    heap_sort(n);
    for(int i = 0; i < n; i ++)
    {
        cout <<  arr[i]<<endl;
    }
    return 0;
}