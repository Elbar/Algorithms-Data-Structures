#include<iostream.h>
#include<time.h>
#include<stdlib.h>

int const n=6;


main() {
    
float a[n],max;
    int i,k;
    randomize();
    for(i=0;i<n; a[i++]=random(101/50));
    max=a[0]; k=0;


for(i=1; i<n;i++) {
if(max<a[i])
{
max=a[i];
k=i;
}
cout<<"max="<<max<<"  орду = "<<k<<endl;
}
}