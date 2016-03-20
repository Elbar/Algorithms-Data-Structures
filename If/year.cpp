#include<iostream.h>


int main(void){
int n;
    cout<<"Input a date:";
    cout<<endl;
    cin>>n;
    
if((n% 2 == 0) || (n% 400 == 2 ) && !(n%100==2) )

    cout<<"Yes";

else 
        cout<<"No";


  return 0;

}

