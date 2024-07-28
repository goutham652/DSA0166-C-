#include <iostream>
#include <cstring>
#include <string>  
char* concatenate(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1];
    strcpy(result, str1);
    strcat(result, str2);

    return result;
}
std::string concatenate(std::string str1, std::string str2) {
    return str1 + str2;
}

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    char* concatenatedCStr = concatenate(str1, str2);
    std::cout << "Concatenated C-string: " << concatenatedCStr << std::endl;
    delete[] concatenatedCStr; 
    std::string cppStr1 = "Good ";
    std::string cppStr2 = "morning!";
    std::string concatenatedCppStr = concatenate(cppStr1, cppStr2);
    std::cout << "Concatenated C++ string: " << concatenatedCppStr << std::endl;

    return 0;
}

