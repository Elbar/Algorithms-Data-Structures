#include<iostream.h>
#include<fstream.h>
#include<string.h>
//#include "maalimat.cpp"
void jazuu(){ 
int i;
fstream M; int k=1;
        char *author;
        char *name;
        int jili;
        char *tobu;
    for(int i=0;i<k;i++){
        author=new char[20];
        name=new char[20];
        tobu=new char[20];}
        i=0;
    M.open("list_1.txt",ios::app);
    while(i<k){
        cin>>author;if(!strcmp(author,"100")) break; else   {cin>>name>>jili>>tobu;
        M<<author<<" "<<name<<" "<<jili<<" "<<tobu<<endl; i++;}} if(!strcmp(author,"100")) M.close(); else{
        cout<<endl<<"jadibalga:"<<endl<<"    avtoru:  "<<author<<endl<<"       ati:  "<<name<<endl
        <<"      jili:  "<<jili<<endl<<"      tobu:  ";
        switch (*tobu){
            case 'A': cout<<"Adabiy chigarma"; break;
            case 'O': cout<<"Okuu kurali"; break;
            case 'M': cout<<"Maalimat kitebi"; break;
            default: cout<<*tobu; break;}
        cout<<endl<<" bolgon maalimat kirgizildi"<<endl;}
        M.close();} 
void keltiruu(){
    int k=1;
    ifstream B;
        char *author;
        char *name;
        int jili;
        char *tobu;
    for(int i=0;i<k;i++){
        author=new char[20];
        name=new char[20];
        tobu=new char[20];}
        
        B.open("list.txt",ios::in);
        ofstream B1;
        B1.open("list_1.txt",ios::out);
        while(B>>author>>name>>jili>>tobu)
        B1<<author<<" "<<name<<" "<<jili<<" "<<tobu<<endl;
        B.close();
        B1.close();}
        
        
        
        
        
        