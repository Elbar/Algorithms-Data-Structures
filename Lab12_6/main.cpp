#include<iostream.h>
#include<fstream.h> 
#include<iomanip.h>
#include "salam.cpp" 
#include "maalimat.cpp"
#include "jazuu.cpp"
void element();
/*void bashi();
void eskertuu(); 
void sizik(); */
int j,k;
main(void){ maalimat();
    for(;;){
    maalimat_6();
    cin>>k;  switch(k){
    case 1: maalimat_1(); bashi(); element(); eskertuu(); break;
    case 2: maalimat_2(); cin>>j;if(j==100) break; else {bashi(); element(); eskertuu(); break;}
    case 3: maalimat_3(); cin>>j;if(j==100) break; else {element(); break;}
    case 4: maalimat_4(); jazuu(); break;
    case 5: maalimat_5();keltiruu(); break;
    case 0: cout<<"programm jabildi"<<endl; break;
    default: cout<<"jarliginizdi atkara albaybiz"<<endl<<"bashka "; break;
    }
    if(k==0) break;    }
     }
void element(){
const int n=20; int i;
    fstream M;
    struct M{
        char *author;
        char *name;
        int jili;
        char tobu;}A[n];
    for(i=0;i<n;i++){
        A[i].author=new char[20];
        A[i].name=new char[20];}
        i=0; int l=0;
    M.open("list_1.txt",ios::in);
    while(M>>A[i].author>>A[i].name>>A[i].jili>>A[i].tobu){
        if(k==1||k==4) cout<<'|'<<setw(2)<<(i+1)<<'|'<<setw(13)<<A[i].author<<'|'<<setw(13)<<A[i].name<<'|'<<setw(13)<<A[i].jili<<'|'<<setw(6)<<A[i].tobu<<'|'<<endl;
        else if(k==2) if((i+1)!=j){cout<<'|'<<setw(2)<<(l+1)<<'|'<<setw(13)<<A[i].author<<'|'<<setw(13)<<A[i].name<<'|'<<setw(13)<<A[i].jili<<'|'<<setw(6)<<A[i].tobu<<'|'<<endl; l++;} i++;}
    if(k==3||(!A[j-1].author)){ cout<<"berilgen nomerluu sap tizmede jok"<<endl; M.close();} else if(k==3&&(A[j-1].author)) { cout<<"Siz suragan saptin;"<<endl<<"   katari:  "<<(j)<<endl<<"   avtoru:  "<<A[j-1].author<<endl<<" atalishi:  "<<A[j-1].name<<endl<<"     jili:  "<<A[j-1].jili<<endl<<"    tobu:  ";
        switch (A[j-1].tobu){
        case 'O': cout<<"okuu kurali"<<endl; break;
        case 'M': cout<<"maalimat kitebi"<<endl; break;
        case 'A': cout<<"adabiy kitep"<<endl; break;
        default: cout<<A[j-1].tobu<<endl;; break;  }}
       
    if(k!=3&&k!=4) sizik();
   
    M.close();
      
        }
    
