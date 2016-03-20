#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#define n 6
 
 
main() {
    
int a[n];
int Multi=1;
    int i;
    randomize();
    for(i=0;i<n; a[i++]=random(10)-5);
 
for(i=0; i<n;i++) 
{
    cout<<" "<<a[i];
    
    }
    
for(i=0; i<n;i++){
if(a[i]%2!= 0 && a[i] < 0) 
Multi*=a[i];

}
 putchar('\n');
 
cout<<" "<<"Multiply of elements="<<Multi<<endl;
}