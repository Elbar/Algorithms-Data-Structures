#include<iostream>


const int n=25;

struct Teen{
char surname;
char name;
char lastname;
int height;
int weight;
} P[n];//Pupil


int main(void) {
int average ; 
int i,max, min;
int k=0;

for(i=0; i<n;i++) {
cin>>P[n].surname>>P[n].name>>P[n].lastname>>P[n].height>>P[n].weight;

max=P[0].height;
if(max<P[i].height) {
max=P[i].height;
}
cout<<"Height of heightest pupil "<<max;
cout<<endl;


min=P[0].height;
if(min>P[i].height) {
min=P[i].height;
}
cout<<"Height of lowest pupil"<<min;
cout<<endl;

}
for(i=0; i<n; i++) {
S=S+P[i].height;
average=S/n;
}

cout<<"Average height of pupils "<<average;
cout<<endl;


if(P.height[i]>170) {
k++;

}
cout<< k "pupils can play basketbol"<<endl;

}