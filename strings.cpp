
#include <iostream>
using namespace std;

/**
 * Prototypes of functions
 */

int strlength(char*);
char *strcopy(char * s1, char * s2);
char  *strncopy(char * s1, char *s2, int size);
char strncut(char *str, int size);
char strcat(char *str1, char *str2);
char charAt(char *str1, int firstPos, int lastPos);
char indexOf( char *str1, char *searchValue, int fromIndex, int lastPos);



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

char *strncopy(char * s1 , char * s2,int size) {
    char *cp = s1;

    for (int i = 0; i < size; i++) {
        while (cp[i++] == s1[i++]) { ;
        }
        return s1;
    }


}

/**
 * Cut letters from the set value
 *
 **/


char strncut(char *str, int size) {

    for (int i = 0; i < size; i++) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

/**
 * Strcat function(concatenation)
 */

char strcat(char *str1, char *str2){
    int size = 10;


        for(int i=0;i<size;i++){

                cout<<str1[i];

            }

    for(int i=0;i<size;i++){
                cout<<str2[i];
        }
    cout<<endl;

    return 0;

}


char strncat(char *str1, char *str2,int size){



    for(int i=0;i<size;i++){

        cout<<str1[i];

    }

    for(int i=0;i<size;i++){
        cout<<str2[i];
    }
    cout<<endl;

    return 0;

}

/**
 * Finding the letters from first to last value
 */

char charAt(char *str1, int firstPos, int lastPos){

    for(int i=firstPos;i<=lastPos;i++){
        cout<<str1[i];

    }
    return 0;
}
/**
 *char *searchValue - substring search from the beginning of the line
 */

char indexOf( char *str1, char *searchValue, int fromIndex, int lastPos){
             int k=0;
             char  *searchArg="Test";
            for(int i=fromIndex;i<=lastPos;i++){

                if(searchArg == searchValue) {
                    k++;
                    cout << str1[i]<<" - "<<k;
                }
            }
    return 0;



}


int main() {

    char string1[] = "Testsasdwd";
    char string2[] = "The Best or nothing";
    char string3[] = "Lorem ipsum dolor sit amet";
    char str[50] = "Lorem ipsum dolor sit amet";



    cout<<"Length of string"<<" = "<<strlength(string1);
    cout<<"\n";

     cout<<strcopy(string1,string2);
    cout<<"\n";
    cout<<strncopy(string1,string3, 10);
    cout<<"\n";
    cout<<strncut(str, 3);
    cout<<"\n";
    cout<<strcat(string1, string2);
    cout<<"\n";
    cout<<strncat(string1, string2,5);
    cout<<"\n";
    cout<<charAt(string1,1,6);
    cout<<"\n";
    cout<<indexOf(string1,"Test",2,6);



}












