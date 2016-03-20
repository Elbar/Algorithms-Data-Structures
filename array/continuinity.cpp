#include<iostream.h>
const int n=100;
 
 
int main() {
    int a[n][n];
    int i,j;
    bool  flag=1;
 
    cout<<endl;
    printf("a)");
    
    for (i=0; i<n; i++)
    {
        flag=1;
        for (j=1; j<n-1; j++)
        {
            if (a[i][j-1]>a[i][j] && a[i][j]<a[i][j+1])
                flag=0;
            if (a[i][j-1]<a[i][j] && a[i][j]>a[i][j+1])
                flag=0;
        }
        if (flag)
            printf("%d",i,"  ");
    }
    
    
}