#include<iostream.h>
#include<string.h>
#include<alloc.h>
#include<stdexcept>


class Student
    {
        private:
          char *name;
          char *Sname;
          int point;
        
        public:
            Student(void);
            Student(char *x, char *y, int a);
        
        void Read(void);
        void Write(void);
        void Search();
        char *Out(int number);
    };
    
    Student::Student(char *x, char *y, int a)
    {
        name=new char[strlen(x)+1];
        strcpy(name,x);
        
        Sname=new char [strlen(y)+1];
        strcpy(Sname,y);
        point=a;
        
        };
        
void Student::Read(void) 
{
    name=new char[20];
    Sname=new char[10];
    cin>>name>>Sname>>point;
    
    }        
    
void Student::Write(void)
    {
        cout<<name<<"  "<<Sname<<" "<<" "<<point;
        
        }
void Student::Search(void)
        {
            if(point>=55)
                cout<<name<<endl;
            
        }
    
int const n=25;
int main() 
{
    Student S[n];
    int i;
    for(i=0;i<n;i++)
        S[i].Read();
    for(i=0;i<n;i++)
    {
    
        S[i].Write();
        cout<<endl;
    }
    
    for(i=0;i<n;i++){
        S[i].Search();
        }
    }