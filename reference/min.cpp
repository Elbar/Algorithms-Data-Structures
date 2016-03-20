#include <iostream> 
#include<cmath>
 
using namespace std; 
int min(int *a,int size)
{
    int mn=a[0];
    for (int i=1; i<size; i++) 
    {
        if (a[i]<mn) 
        {
            mn=a[i];
        }
    }
    return mn;
} 
int max(int *a,int size)
{
    int mn=a[0];
    for (int i=1; i<size; i++) 
    {
        if (a[i]>mn) 
        {
            mn=a[i];
        }
    }
    return mn;
} 
int main()
{
    int q=2,w=3,e=10;
    int *p1=&q,*p2=&w,*p3=&e;
    cout<<q<<' '<<w<<' '<<e<<endl;
    cout<<*p1<<' '<<*p2<<' '<<*p3<<endl;
    
    int mx=*p1;
    if(*p2>mx)
        mx=*p2;
    if(*p3>mx)
        mx=*p3;
    cout<<"max="<<mx<<endl;
 
    int mn=*p1;
    if(*p2<mn)
        mn=*p2;
    if(*p3<mn)
        mn=*p3;
    cout<<"min="<<mn<<endl;
 
    int a[3];
    a[0]=*p1;
    a[1]=*p2;
    a[2]=*p3;
    
    cout<<"max="<<max(a,3)<<endl;
    cout<<"min="<<min(a,3)<<endl;
 
    system ("pause");
    return 0;
}