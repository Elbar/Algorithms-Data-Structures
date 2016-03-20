#include <fstream>
#include <iostream>


using namespace std;
const int n=20;

 struct Dweller  {
    char country[10]; 
    int  count[15];
     char continent[10];
    }
    Inhabitant[n];
int main()
{
    int i;
    ifstream fin("test.txt"); 
    for(i=0;i<n;i++){
        
    fin >> Inhabitant[n].country>>Inhabitant[n].count>>Inhabitant[n].continent; }
    
    for(i=0;i<n;i++){
    cout << Inhabitant[n].country <<Inhabitant[n].count<<Inhabitant[n].continent<< endl; 
}
    
    fin.getline(Inhabitant[n].country, 20);
    fin.getline(Inhabitant[n].count, 15);
    fin.getline(Inhabitant[n].continent, 10);
    fin.close(); 
    cout << Inhabitant[n].country <<Inhabitant[n].count<<Inhabitant[n].continent<< endl; 

    system("pause");
    return 0;
}