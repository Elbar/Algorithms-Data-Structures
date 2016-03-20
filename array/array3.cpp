//a[0],a[0]+a[1],..., a[0]+a[1]+...+a[n-1];



#include<iostream.h>
#include<iomanip.h>
#include<time.h>
#include<stdlib.h>

int const n=6;
  int main() {
    float a[n], S=0;
      int i;
       randomize();
        for(i=0;i<n;i++)
       {
     a[i]=random(1000)/35;
    S=S+a[i];
cout<<"S="<<S<<endl;
        } 
    }
    