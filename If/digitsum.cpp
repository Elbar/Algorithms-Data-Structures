#include <iostream>
#include <string>
#include <numeric>
using namespace std;
int main(){ 
    string s;
    cin >> s;
    cout << accumulate(s.begin(), s.end(), 0) - s.size() * 48;
        return 0;
}