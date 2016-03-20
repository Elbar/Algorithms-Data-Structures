#include <iostream.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <alloc.h>
#include<iomanip.h>



int main(void) {
    int size; //length of array              
        int *A; //reference to first element on array      
             int *C;//reference to elements of array          
                 randomize();  
                     size=random(50)+50;
                         cout<<"Size of array = "<<size<<endl;
                            putchar('\n');
                                A=(int *)malloc(size*sizeof(int));
                                    cout<<"First array:\n";
                                        for (C=A; C<A+size; C++) {
                                             *C=random(50)+50;
                                                cout<<setw(3)<<*C;  }
                                                     putchar('\n');
                                                         putchar('\n');
                                                    cout<<"Third element of array:";
                                                putchar('\n');
                                            cout<<*(A+3);
                                        putchar('\n');
                                    putchar('\n');
                                cout<<"Used array:\n";
                            for (C=A; C<A+size; C++){
                        if (*(A+3)<*C)
                     * C=*(A+3);
                 cout<<setw(3)<<*C; }
            free(A);
        return 0;
    }

