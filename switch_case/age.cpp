#include<iostream>
#include<cmath>
using namespace std;
int main(){
 
int age;
cout<<"Vvedite vozrast ot 1 do 99:"<<endl;
cin>>age;
if(age>=1 && age<=99){
           
if(age==1) {cout<<"Mne "<<age<<" god"<<endl;}
for(int i=2; i<5; i++)
{if(age==i) cout<<"Mne "<<age<<" goda"<<endl;}
 
for(int i=5; i<21; i++)
{if(age==i) cout<<"Mne "<<age<<" let"<<endl;}
 
if(age>=21){ switch(age%10){
                case 1: cout<<"Mne "<<age<<" god"<<endl; break;
                case 2: cout<<"Mne "<<age<<" goda"<<endl; break;
                case 3: cout<<"Mne "<<age<<" goda"<<endl; break;
                case 4: cout<<"Mne "<<age<<" goda"<<endl; break;
                default: cout<<"Mne "<<age<<" let"<<endl;}}
                
           }
else cout<<"Oshibka, vozrast ne podhodit!"<<endl;
 
    
 system("pause");
 return 0;   
}