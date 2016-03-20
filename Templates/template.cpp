//
// Created by root on 11/24/15.
//

#include<iostream>


using namespace std;

template<class t>

t Large(t n1, t n2){
    return (n1>n2) ? n1:n2;
}

template <class  t>
void swap(t *x,t *y)
{
    t temp;
    temp = x;
    x=y;
    y=temp;
}

void fun(int a,int b,float c,float d)
{
    cout<<"\na and b before swaping :"<<a<<"\t"<<b;
    swap(a,b);
    cout<<"\na and b after swaping  :"<<a<<"\t"<<b;
    cout<<"\n\nc and d before swaping :"<<c<<"\t"<<d;
    swap(c,d);
    cout<<"\nc and d after swaping  :"<<c<<"\t"<<d;
}


int main()
{
    int a,b;
    float c,d;
    char c1, c2;

    cout<<"Enter A,B values(integer):";
    cin>>a>>b;
    cout<<"Enter C,D values(float):";
    cin>>c>>d;
    fun(a,b,c,d);

    cout<<"\n\nEnter two characters: ";
    cin>>c1>>c2;
    cout<<Large(c1, c2)<<" has larger ASCII value.";
    return 0;

}
