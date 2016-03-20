Date.h
//ќбъ€вление класса Date
//Ёлемент функции определ€ютс€ в Date.cpp

#ifndef DATE_H
#define DATE_H

class Date
{
public:
Date(int=1,int=1, int=2000);//Default constructor
void print ();
private:
int month;
int day;
int year;
};//End of class Date

Header file of class Date
//Date.cpp
#include<iostream.h>
using std::cout;
using std::endl;

#include "Date.h"


Date::Date(int m,int d, int y)
{
month=m;
day=d;
year=y;

}

//Print date in format (mm/dd/yyyy)
void Date::print()
{
cout<<month<<'/'<<day<<'/'<<year;
}


#include<iostream>
using std::cout;
using std::endl;
#include "Date.h"

int main()
{
Date date1(7,4,2004);
Date date2;//date2 default

cout<<"date1= ";
date1.print();
cout<<"\ndate2= ";
date2.print();
date2=date1;
cout<<"\n\n After default memberwise assignment , date2=";
date2.print();
cout<<endl;
return 0;
}

}