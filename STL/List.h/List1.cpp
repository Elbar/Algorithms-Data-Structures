#include <iostream>
#include <list>     
#include <iterator> 
using namespace std;
 
int main()
{
   list<int> myList; 
   for(int i = 0; i < 50; i++) {
       myList.push_back(i); 
   }
 
   cout << "List: ";
   copy(myList.begin(), myList.end(), ostream_iterator<int>(cout," ")); 
   cout << "\nFirst element in list: " << myList.front();
   cout << "\nLast element in list: " << myList.back();
   return 0;
}