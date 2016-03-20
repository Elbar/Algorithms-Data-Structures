
#include<iostream.h>
#include<time.h>
#include<stdlib.h>
 
int const n=10;
 
 
main() {
    
float a[n];
int max,min,i;
int sum=0,multi=1;
randomize();
for(i=0;i<n; a[i++]=random(100));
 
 max=a[0];min=a[0];
for(i=1; i<n;i++) {
 
if(a[i]>0)
{
sum+=a[i];
}
 
if(max<a[i])
{
max=a[i];
 
}
if(min<a[i])
{
min=a[i];
 
}
cout<<"Sum="<<sum;
cout<<"max="<<max<<"  min = "<<min<<endl;
}
 
for(i=0;i<n;i++){
 
if(a[i]<max && a[i]>min)
Multi*=a[i]
 
 
}
 
}