#include <string>
#include <math.h>
#include <stdio.h>
#include <iostream.h>

#include <fstream>
using namespace std;
 
#pragma warning(disable: 4996)
class Transport
{
private:
    char *name;
    int weight;
    int date;
public:
    Transport(void);
    Transport(char *pname, int w, int d);
    void SetWeight(int w);
    void Print();
    ~Transport(void);
};
Transport::Transport(void)
{
    name = "Transport";
    weight = 1990;
    date = 10;
}
Transport::Transport(char *pname, int w, int d)
{
    name = pname;
    weight = w;
    date = d;
}
void Transport::SetWeight(int w)
{
    weight = w;
}
void Transport::Print()
{
    cout << "Название: " << name << endl;
    cout << "Вес: " << weight << endl;
    cout << "Количество лет: " << date << endl;
}
Transport::~Transport(void)
{
    name = '\0';
    weight = 0;
    date = 0;
}
class Auto : public Transport
{
 
public:
    Auto() :Transport()
    {
 
    };
    Auto(char *pname, int w, int d) :Transport(pname, w, d)
    {
 
    };
};
class Gruz : public Transport
{
 
public:
    Gruz(void) :Transport()
    {
 
    }
    Gruz(char *pname, int w, int d) :Transport(pname, w, d)
    {
 
    }
};
class Paroxod : public Transport
{
 
public:
    Paroxod(void) :Transport()
    {
 
    }
    Paroxod(char *pname, int w, int d) :Transport(pname, w, d)
    {
 
    }
    ~Paroxod(void);
};
class Plane : public Transport
{
 
public:
    Plane(void) :Transport()
    {
 
    };
    Plane(char *pname, int w, int d) :Transport(pname, w, d)
    {
 
    };
};
int main()
{
    setlocale(LC_ALL, "rus");
    Auto Mazda("Mazda", 1990, 10);
    Auto Porsche("Porsche", 2015, 1);
    Mazda.Print();
    cout << endl;
    system("pause");
}