#include <iostream.h>
#include <stdlib.h>

using namespace std;
 const int n=5;
 const int p=4;
int main()
{
 double A[n][p]={1.,1.1,1.,1.4,1.,1.6,1.,1.8,1.,1.,1.1,1.3,1.,1.,1.6,1.7,1.8,1.9,1.1,1.2} ,min,sum=0;
 int i,j;
 for(i=0;i<n;i++)
 {for(j=0;j<p;j++)
     min=A[0][0];
   if (j==0) min=A[j][i];
   else if (A[j][i]<min) min=A[j][i];   
  sum+=min;}
 for(i=0;i<n;i++)
  A[i][1]=sum;
 for(i=0;i<n;i++)
 {for(j=0;j<p;j++) 
  cout<<A[i][j]<<"\t";
 cout<<endl;}
}