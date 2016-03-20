#include<iostream.h>


int main(void){
    int k=11;
    int m=90;
    int n=30;
    int max;
    
    cout<<"Max element it is :";
    
    max=k;
    if(m > max)
        max=m;
     
    if(n > max)
        max=n;
    
cout<<max;
cout<<endl;
    
    return 0;
}

