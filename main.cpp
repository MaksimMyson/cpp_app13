#include <iostream>
#include "str_lib.h"

int main() {
    char str1[100], str2[100];
    char s;

    std::cout << "Enter a string: ";
    std::cin >> str1;

    std::cout << "Length of the string: " << mystrlen(str1) << std::endl;

    std::cout << "Enter another string: ";
    std::cin >> str2;

    mystrcpy(str1, str2);
    std::cout << "After copying, str1: " << str1 << std::endl;

    mystrcat(str1, str2);
    std::cout << "After concatenation, str1: " << str1 << std::endl;

    std::cout << "Enter a character to search in str1: ";
    std::cin >> s;
    char* charPtr = mystrchr(str1, s);
    if (charPtr != nullptr) {
        std::cout << "Character found at position: " << charPtr - str1 << std::endl;
    }
    else {
        std::cout << "Character not found in str1." << std::endl;
    }

    std::cout << "Enter a substring to search in str1: ";
    std::cin >> str2;
    charPtr = mystrstr(str1, str2);
    if (charPtr != nullptr) {
        std::cout << "Substring found at position: " << charPtr - str1 << std::endl;
    }
    else {
        std::cout << "Substring not found in str1." << std::endl;
    }

    return 0;
}
