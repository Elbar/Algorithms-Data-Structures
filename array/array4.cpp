// a[0]-a[1]+a[2]-...+(-1)^n * a[n-1]

#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip.h>


int const n=15;

  main() {
    float a[n], S=0;
       int i,k=1;
        randomize();
          for(i=0;i<n;i++) 
             {
               a[i]=random(500)/56;
            cout<<setw(4)<<a[i];
        S=S+k*a[i];
      k=-k; 
    }
  cout<<"   Sum="<<S<<endl;
}