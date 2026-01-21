#include <iostream>
#include <string>

int main (void) {
    //* init a string with a default value
    std::string str1("This is the first string to bin initalized.");
    std::string str2(str1);

    //* init the string with a character and the number
    std::string str3(100, '&');

    //* init the string with a part of another string
    std::string str4(str1, 14, 6); //* start from index 14, take 6 characters

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout << str4 + str1 << std::endl;
    }
}