#include <iostream>
#include <string>

int main(){
    // Create a string
    std::string str = "Hello";

    std::cout << str << std::endl;
    std::cout << "The size of the string is " << str.size() << std::endl;

    
    // Cat strings
    str += " World!";
    std::cout << str << std::endl;
    std::cout << "The size of the string is " << str.size() << std::endl;
    
    return 0;
}