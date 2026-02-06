#include <iostream>

void print_digits(int n); //formal parameter

int main(void) {
    print_digits(12345); // 12345 is actual parameter

    return 0;
}

void print_digits(int n){ // implement the int
    // Base case
    if (n <= 0) {
        return;
    }
    print_digits(n / 10);
    std::cout << n % 10 << std::endl;

}
