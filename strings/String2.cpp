#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
 
int main()
{
    const int n = 100;
    char st1[n], st2[n];
    
    cout << "Input text (end - exit): " << endl;
    
    while(cin.getline(st1, n))
    {
        if (strcmp(st1,"end")) 
        {
            int i, j;
            for (i = 0, j = 0; st1[i]; i++, j++)
            {
                if (st1[i] == ' ')
                {
                    while(st2[j])
                    st2[j] = ',';
                    ++j;
                    st2[j] = ' ';
                }
                else st2[j] = st1[i];   
            }
            st2[j] = '\0';
            cout << "Text1: " << st1 << endl;
            cout << "Text2: " << st2 << endl;
            
            cout << "Input text (end - exit): " << endl;
        }
        else break;
    }
 
    system("pause");
    return 0;
}