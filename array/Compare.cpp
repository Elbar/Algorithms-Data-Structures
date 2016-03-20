//We have a two arrays with same values,but in different positions
//e.g. a= {1,2,3,5}    b={3,5,2,1}


#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<iomanip.h>


using namespace std;
 int const n=100;
  int main() {
   int a[n],b[n],i,j;
     int k=0;
       randomize();
         for(i=0; i<n;i++){
            //foreach array we assign a random values
            a[i]=random(100)-50;
              b[i]=random(100)-50;
                  cout<<setw(10)<<a[i]<<setw(10)<<b[i]<<endl;
                    }
                for(i=0;i<n; i++)
              for(j=0;j<n;j++)
            if(a[i] == b[j]) k++;
          if(k==n)
        cout<<"Array is same "<<endl;
      else
 cout<<"Array isn't same"<<endl;
        
}