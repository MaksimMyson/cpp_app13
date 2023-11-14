#include "str_lib.h"
#include <cstring>
#include <cstdlib>

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str1 == *str2) {
        ++str1;
        ++str2;
    }

    if (*str1 == *str2) {
        return 0; // рядки рівні
    }
    else if (*str1 > *str2) {
        return 1; // перший рядок більший
    }
    else {
        return -1; // другий рядок більший
    }
}

int StringToNumber(char* str) {
    return atoi(str);
}

char* NumberToString(int number) {
    char* result = new char[15]; // достатньо для зберігання INT_MAX у строки та '\0'
    snprintf(result, 15, "%d", number);
    return result;
}

char* Uppercase(char* str) {
    char* result = str;
    while (*result) {
        *result = toupper((unsigned char)*result);
        ++result;
    }
    return str;
}

char* Lowercase(char* str) {
    char* result = str;
    while (*result) {
        *result = tolower((unsigned char)*result);
        ++result;
    }
    return str;
}

char* mystrrev(char* str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
