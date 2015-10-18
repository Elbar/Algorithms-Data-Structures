#include <iostream>
using namespace std;

/**
 * Prototypes of functions
 */
/*
int strlength(char*);
char *strcopy(char * s1, char * s2);
char  *strncopy(char *dest, const char *src, int n);
char * strcat(char * destination, const char * value);
int strCompare(char *str1,char *str2);



int strlength(char* str1)
{
    int length=0;

    while(*str1++)
        ++length;
    return length;
}

char  *strcopy (char * s1, char * s2)
{
    char * cp = s2;

    while( *cp++ == *s1++ )
        ;
    return(s2);
}

char* strncopy(char *dest, const char *src, int n)
{
    int i;

    for(i = 0; i < n && src[i]!='\0'; i++)
        dest[i] = src[i];
    return dest;
}




/**
 * Strcat function(concatenation)
 *


char * strcat(char * destination, const char * value)
{
    char *p = destination;

    while ( *p != '\0' ) ++p;

    while( *p++ = *value++ );

    return destination;
}





int strCompare( char *str1, char *str2)
{

        while(*str1 == *str2)
        {
            if(*str1 == '\0')
                return 0;
            str1++;
            str2++;
        }
        return (strlength(str1) - strlength(str2));
}


int main() {

    char string1[] = "Test";
    char string2[] = "TestLorem";
    char string3[] = "Lorem ipsum dolor sit amet";
    char str[50] = "Lorem ipsum dolor sit amet";


     cout<<"----------g------------------------------------"<<endl;
    cout<<"Length of string"<<" = "<<strlength(string1);
    cout<<"\n";
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Strcopy = "<<strcopy(string1,string2);
    cout<<"\n";

    cout<<"-----------------------------------------------"<<endl;
    cout<<"strncopy = "<<strncopy(string1,string2, 5);
    cout<<"\n";

    cout<<"-----------------------------------------------"<<endl;

    cout<<"strcat = "<<strcat(string1, string2);
    cout<<"\n";
    cout<<"-----------------------------------------------"<<endl;
    cout<<"strcompare = "<<strCompare(string1,string2);
    cout<<"\n";

}
*/

