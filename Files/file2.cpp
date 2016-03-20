#include<iostream.h>
#include<fstream.h>

struct Student 
    {
        char name[20];
        int point ;
        };
        
        
        int  main() 
        {
            Student St;
            ifstream infile;
            infile.open("TextFile3.txt");
            if(!infile.is_open() )
                cout<<"Error"<<endl;
            else
            
            while (infile>>St.name>>St.point)
                if(St.point>=4)
                    cout<<St.name<<endl;
                
                infile.close();
                
                return 0;
                
            }