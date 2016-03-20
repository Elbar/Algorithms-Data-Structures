#include <iostream>
using namespace std;
void main()
{
 
 
int M[100][100];
int k=0; 
int k1=0; 
int n; 
int m; 
int i; 
int j;
cout<<"Input count of strings "<<endl;
        cin>>n;
cout<<"Input count of rows"<<endl;
        cin>>m;
cout<<"Input elements of array"<<endl;


 for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
          { 
                    cin>>M[i][j];
          }
    }

 
  for (i=0; i<n; i++)
  {    
        for (j=0; j<m; j++)
        {         
            if (M[i][j]==0)
             {
                k1++;//
             }
        }
      if (!k1)
        {
          k++;
        }
        k1=0;
   }  
    cout<<"Count of strings isn't contain a null element "<<k<<endl;
  }