#include <iostream>

// Create a namespace.
namespace first {   // we can create vairables, classes, and functions. "int" is a variable.
    int a;
}

namespace second {
    int a;
}

int main(void) {
    // :: - scope resolution operator
    first::a = 10;
    std::cout << first::a << std::endl;

    return 0;
}