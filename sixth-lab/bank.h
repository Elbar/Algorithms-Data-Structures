#include<string>

using  namespace std;
class Bank
{
private:
    int day,month,year,account,accountNumber;
    string surname, name, middle_name;

public:


    void setValue(string client_surname, string client_name, string client_middle_name)
    {
        surname = client_surname;
        name = client_name ;
        middle_name  = client_middle_name;
    }
    void getDate(int tmp)
    {
        for(int i  = 0; i< tmp; i++) {
            cout << "Details:\n " << surname[i] << "|" << name[i] << "|" << middle_name[i] << endl;
        }
    }
};
