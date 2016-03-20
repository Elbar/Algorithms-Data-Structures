#include <iostream>
#include <list>     // подключаем заголовок списка
#include <iterator> // заголовок итераторов
#include <ctime>
#include <cstdlib>
using namespace std;
 
int main()
{
   list<int> myList; 
   srand(time(NULL));
 
   for(int i = 0; i < 15; i++) {
       myList.push_back(rand()%20); 
   }
 
   cout << "List: ";
   copy(myList.begin(), myList.end(), ostream_iterator<int>(cout," "));
 
   myList.sort();   
   cout << "\nSorted list: ";
   copy(myList.begin(), myList.end(), ostream_iterator<int>(cout," "));
 
   myList.unique();   
   cout << "\nList with unique elements: ";
   copy(myList.begin(), myList.end(), ostream_iterator<int>(cout," "));
   
   
   
   list<int> myList2; 
   for(int i = 0; i < 15; i++) {
       myList2.push_back(rand()%20); 
   }
   cout << "\nList2: ";
   copy(myList2.begin(), myList2.end(), ostream_iterator<int>(cout," "));
 
   myList2.merge(myList);
   cout << "\nMerge lists: ";
   copy(myList2.begin(), myList2.end(), ostream_iterator<int>(cout," "));
   return 0;
}