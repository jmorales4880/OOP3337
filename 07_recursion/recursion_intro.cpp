#include <iostream>

void countdown(int n);

int main(void) {
    countdown(20);

    return 0;
}

void countdown(int n ) {
    if (n < 1) {
        return; // Base case (when we stop calling)
    }
    std::cout << n << " ";
    countdown(n - 3); // Call the same function (recursive call) the - 1 tell it to not repeat and to pass to the next call

}