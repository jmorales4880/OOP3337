#include <iostream>
#include <string>

int main(void) {
    // Initialize the string
    std::string str1("this is first string");

    // Initialize the string with another string
    std::string str2(str1);

    // Initialize the string with character and number of occurence
    std::string str3(100, '?');

    // Initialize the string with part of another string
    std::string str4 (str1, 14, 6); // 14  start index, 6 characters to take

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout << str4 + str1 << std::endl;
    }

    std::string s0("3");
    std::string s1 = "8";
    std::string s2 = s0 + s1;
    s2 += '7';
    s2 += (s1 < s2) ? s0 : "Z";
    std::cout << s2 << "J" << std::endl;

// 3 logical is AND OR NOT

    return 0;
}