#include "str_lib.h"

int mystrlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        ++length;
        ++str;
    }
    return length;
}

char* mystrcpy(char* str1, const char* str2) {
    char* originalStr1 = str1;
    while ((*str1++ = *str2++) != '\0');
    return originalStr1;
}

char* mystrcat(char* str1, const char* str2) {
    char* originalStr1 = str1;
    while (*str1 != '\0') {
        ++str1;
    }
    while ((*str1++ = *str2++) != '\0');
    return originalStr1;
}

char* mystrchr(char* str, char s) {
    while (*str != '\0') {
        if (*str == s) {
            return str;
        }
        ++str;
    }
    return nullptr;
}

char* mystrstr(char* str1, char* str2) {
    while (*str1 != '\0') {
        char* currentStr1 = str1;
        char* currentStr2 = str2;

        while (*currentStr1 != '\0' && *currentStr2 != '\0' && *currentStr1 == *currentStr2) {
            ++currentStr1;
            ++currentStr2;
        }

        if (*currentStr2 == '\0') {
            return str1;
        }

        ++str1;
    }
    return nullptr;
}
