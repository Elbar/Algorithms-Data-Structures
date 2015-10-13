#include <iostream>
using namespace std;

/**
 * Prototypes of functions
 */

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

<<<<<<< HEAD


=======


>>>>>>> b04a376983d33d6a921447f33e63c7b0facc9436

/**
 * Strcat function(concatenation)
 */

<<<<<<< HEAD

char * strcat(char * destination, const char * value)
{
    char *p = destination;

    while ( *p != '\0' ) ++p;

    while( *p++ = *value++ );

    return destination;
}
=======

char * strcat(char * destination, const char * value)
{
    char *p = destination;

    while ( *p != '\0' ) ++p;

    while( *p++ = *value++ );

    return destination;
}


/**
 * Cut letters from the set value
 *
 **/


char strncut(char *str, int size) {

    for (int i = 0; i < size; i++)
        cout << str[i];
}



/**
 *char *searchValue - substring search from the beginning of the line
 */
>>>>>>> b04a376983d33d6a921447f33e63c7b0facc9436



char strncut(char *str, int size) {

<<<<<<< HEAD
    for (int i = 0; i < size; i++)
        cout << str[i];
}


=======
>>>>>>> b04a376983d33d6a921447f33e63c7b0facc9436
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
    char string2[] = "Testd";
    char string3[] = "Lorem ipsum dolor sit amet";
    char str[50] = "Lorem ipsum dolor sit amet";


     cout<<"----------------------------------------------"<<endl;
    cout<<"Length of string"<<" = "<<strlength(string1);
    cout<<"\n";
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Strcopy = "<<strcopy(string1,string2);
    cout<<"\n";

    cout<<"-----------------------------------------------"<<endl;
    cout<<"strncopy = "<<strncopy(string1,string2, 4);
    cout<<"\n";

    cout<<"-----------------------------------------------"<<endl;

    cout<<"strcat = "<<strcat(string1, string2);
    cout<<"\n";
    cout<<"-----------------------------------------------"<<endl;
    cout<<"strcompare = "<<strCompare(string1,string2);
    cout<<"\n";

}


