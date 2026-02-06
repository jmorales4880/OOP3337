/* FIrst C++ program

01/14/2026

*/


#include <iostream>

// using namespace std;  // allows us to not have to write std:: and only write the object class.

// using std::cout; // will only write out the cout, all other objects will need cout

int main(void) {
    // Print to the console
    std::cout << "Hello from COP3337!\n" << std::endl;

    std::cout << 87 * 76 - 98 << std::endl;

    // std - standard namespace. Namespace is an additional container where you can store things, defines things, create functions. 
    // "cout" is the object name's class and stands for console output.
    // << - stream insertion operator
    // endl - end of line, can replace \n


    return 0; // 0 is success, non zero is error
}