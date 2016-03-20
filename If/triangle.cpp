#include<iostream.h>
#include<iomanip.h>


int main() 
{
    int a,b,c,p;
    
    cout<<"Input a side of triangle :";
    cout<<endl;
    cin>>a>>b>>c;
    p=sqrt((a*a)+(b*b));
    if(p == c)
        cout<<"Yes";
    else
        cout<<"No";
}
 
    
    
    