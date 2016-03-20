#include<iostream.h>

struct Item {
int info;
Item* next;
};
 
void main ( )
{
int k=0;
Item *first = 0; //reference to  first element in list
Item *p;
int i;
//Create list
for (;;) {
//Input numbers while == 0
cin>> i;
if (!i) break;
 
//Create a new element of list
p = new Item;
p->info = i;
 
//Join a new element
p->next = first ;
first = p;
}
 
//Output elements and count of numbers
p = first;
while (p) {
k++;
cout<<" p->info    " ;
p = p->next;
}
 
//  Delete elements
while (first) {
p = first;
first = first->next ;
delete p;
    
}
cout<<"Count of numbers is "<<k;
}