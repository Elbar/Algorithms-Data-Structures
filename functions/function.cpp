#include <iostream>
#include <math.h>
using namespace std;
 
double Value(double x)
{
    return  (cos(x)+sin(x) );
}
 
 
int main()
{
double a,b,h;
cout<<"Enter a:"; 
cin>>a;
cout<<"Enter b:"; 
cin>>b;
cout<<"Enter h:";
 cin>>h;
 
while(a<=b)
{
    cout<<"x= "<<a<<" | Value(x)= "<<Value(a)<<endl;
    a+=h;
}
 
return 0;
}

//////////////////////////

#include <iostream>
#include <math.h>
using namespace std;
 const int n=5;
double Value(double x)
{
    return  (cos(x)+sin(x) );
}
 
 
int main()
{
    double val[n];
double a,b,h,i;
cout<<"Enter a:"; 
cin>>a;
cout<<"Enter b:"; 
cin>>b;
cout<<"Enter h:";
 cin>>h;
 
    
    for(i=0; i<= b;i++){
while(a<=b)
{
    
    val[i] = Value(a);
    cout<<"x= "<<a<<" | Value(x)= "<<val[i]<<endl;
    a+=h;
}
return 0;
}
 

}
