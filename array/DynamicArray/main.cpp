#include<iostream.h>
#include "DynamicArray.h"

using namespace std;

void DoCode(char *source, char *dest, DynamicArray<char> & codeTable)
{
for(int i=0;source[i];i++){
    
    dest[i]=codeTable[source[i]];
    }    
}

int main() 
   {
       DynamicArray<char> codeTable(128);
       for(int c=0;c<128;c++)
           codeTable[c]=c;
       for(int i=0;i<13;i++){
           char b=codeTable['a'+i];
          codeTable['a'+i]=codeTable['z'-i];
          codeTable['z'-i]=b;
       
    
    }
    char *src="Rayimbekov Aibek";
    char *dest=new char[strlen(src)+1];
    memset(dest,0,strlen(src)+1);
    DoCode(src, dest,codeTable);
    cout<<"source string:<< "<<src<<"\n"<<"Destination string:<<"<<dest<<"\n";
    return 0;
}