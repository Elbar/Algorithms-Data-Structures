#include <iostream.h>
#include <cmath.h>
 
int main()
{
    int* mas;
    int n, i, imin = 0, firstz = 0, abssum = 0, j, k;
    std::cout<<"Input size:\n> ", 
        std::cin>>n;
    mas = new int[n];
    for(i = 0; i < n; ++i)
        std::cin>>mas[i];


    for(i = 1; i < n; ++i)
        if(abs(mas[i]) < abs(mas[imin]))
            imin = i;
    std::cout<<"Absolute minimum: \n< mas["<<imin<<"] = "<<mas[imin]<<std::endl;
 

    i = 0;
    while(mas[i] && i < n)
        ++i;
    while(i < n)
        abssum += mas[i], ++i;
    std::cout<<"Absolute sum after first zero:\n< "<<abssum<<std::endl;

 
    j = 0;
    int* even = new int[(n>>2) + 1];
    int* uneven = new int[(n>>2) + 1];
    for(i = 0; i < n - 1; i += 2, ++j)
    {
        even[j] = mas[i];
        uneven[j] = mas[i + 1];
    }
    for(i = 0; i < j; ++i)
        mas[i] = even[i];
    k = 0;
    for(i = j; i < j << 1; ++i, ++k)
        mas[i] = uneven[k];
    for(i = 0; i < n; ++i)
        std::cout<<mas[i]<<' ';

 
    delete [] even;
    delete [] uneven;
    delete [] mas;
 
    return 0;
}