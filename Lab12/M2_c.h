#include<iostream.h>
#include<stdio.h>
#include "M1_c.h"



/*      �������      */

   void Read(void)
        {
      
            int i;
            cout<<"����������, ���������,�������� ������ ���� ������ ����������:"<<endl;
            putchar('\n');
            for(i=0;i<n;i++){
            cin>>List[i].surname>>List[i].group[3]>>List[i].point[4]>>List[i].position[2];
            
        }
        
          cout<<endl;
        };
        
        
     void Header(void)
         {

         
            putchar('\n');
            printf("|���������|��������| �������� �����|������� �����| ");
            putchar('\n');
            printf("|---------|--------|---------------|-------------| ");
            putchar('\n'); 
         };
         
        
      
     void  View(void)
        {   
            
             int i;
            for(i=0;i<n;i++){
            cout<<'|'<<setw(9)<<List[i].surname<<'|'<<setw(8)<<List[i].group[3]<<'|'<<setw(15)<<List[i].point[4]<<'|'<<setw(13)<<List[i].position[2]<<'|';
           cout<<endl;
        }
         
        };

     void Footer(void) 
         {
           printf("|------------------------------------------------| ");
           putchar('\n');
           printf("|     �-������ , �-���� , �-��������             | ");
           putchar('\n'); 
           printf("|------------------------------------------------| ");

    
         };
     
         
     void Line(void)
        {
          printf("|------------------------------------------------| ");
            putchar('\n');
          cout<< "|  ����� ������������ ���������                  | ";
          putchar('\n');
          printf("|---------|--------|---------------|-------------| ");
         
        }
