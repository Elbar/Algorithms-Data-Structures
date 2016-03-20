#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
    int a[6],m;
    cin >> a[0], m = a[0];
    for (int i = 1; i < 6; i++){
        cin >> a[i];
        m = max(m, a[i]);
    }
    cout << m;
    return 0;
}