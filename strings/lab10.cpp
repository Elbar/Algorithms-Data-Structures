#include <iostream.h>
#include <cctype.h>
 
void reverse(std::string& str) {
    for ( int i = 0, j = str.length()-1; i < j; i++, j-- ) {
        char buffer;
 
        buffer = str[i];
        str[i] = str[j];
        str[j] = buffer;
    }
}
 
int main() {
    std::string text;
    std::string word;
    bool flag = false;
    int counter = 1;
 
    getline(std::cin, text);
 
    for ( int i = text.length(); text[i] >= 0; i-- ) {
        if ( isalpha(text[i]) && flag == false ) {
            while ( isalpha(text[i]) ) {
                word += text[i];
                i -= 1;
            }
            flag = true;
        }
        if ( flag == true && isspace(text[i]) ) {
            counter += 1;
        }
    }
 
    reverse(word);
    
    if ( word.length() > 0 ) {
        std::cout << "Last word: " << word << "\nNumber: " << counter << std::endl;
    } else {
        std::cout << "There are not any words!" << std::endl;
    }
 
    return 0;
}