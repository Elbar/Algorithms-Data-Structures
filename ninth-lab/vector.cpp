
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> numbers;

    string   buffer="" ;
    int point;

    cout << "Вводите номера. "
    << "По окончание ввода введите пустую строку" << endl;

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            numbers.push_back(buffer);
        }
    } while (buffer != "");

    unsigned int vector_size = numbers.size();


    string max = numbers[0];
    if(!numbers.empty() ){
        for (int i = 0; i < vector_size; i++) {
            if(max < numbers[i])
            {
                max = numbers[i];
            }
            cout<<max;
            //cout << numbers[i] << endl;
        }

    }
    // Вывод заполненного вектора на экран
    cout << "Ваш вектор." << endl;
    for (int i = 0; i < vector_size; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}