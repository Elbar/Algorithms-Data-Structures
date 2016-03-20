#include<iostream.h> 
#include<conio.h> 
#include<math.h> 
#include<stdlib.h> 

void CHELN_sort(int a[],long N); 
void input(int a[],long N); 
void output(int a[],long N); 

void main() 
{ 
   long N; 
   cout<<"N?\n"; 
   cin>>N; 
   int *x=new int[N]; 
   input(x,N); 
   output(x,N); 
   CHELN_sort(x,N); 
   output(x,N); 
   cout<<"Press any key\a"; 
   cout<<endl; 
   getch(); 
} 
void CHELN_sort(int a[],long N) 
{ 
   cout<<"CHELN_sort RUN\n"; 
   for(int j=0;j<N-1;j++) 
{ 
   if(a[j]>a[j+1]) 
{ 
    a[j]=a[j]+a[j+1]; 
    a[j+1]=a[j]-a[j+1]; 
    a[j]=a[j]-a[j+1]; 
    for(int i=j;i>0;i--) 
{ 
    if(a[i]<a[i-1]) 
{ 
     a[i]=a[i]+a[i-1]; 
     a[i-1]=a[i]-a[i-1]; 
     a[i]=a[i]-a[i-1]; 
    } 
    else break; 
    }}}} 
void input( int a[],long N) 
{ 
   cout<<"Select type:"<<endl; 
   cout<<"1) Random"<<endl; 
   cout<<"2) Manually"<<endl; 
   char p=getch(); 
   if(p=='1') 
{ 
   for(int i=0;i<N;i++) 
    a[i]=rand()%50; 
   } 
   else{ 
   for(int i=0;i<N;i++) 
{ 
    cout<<"a["<<i<<"]="; 
    cin>>a[i]; 
   }}} 
void output(int a[],long N) 
{ 
   cout<<"output ===\n"; 
   for(int i=0;i<N;i++) 
   cout<<"a["<<i<<"]="<<a[i]<<endl; 
}
