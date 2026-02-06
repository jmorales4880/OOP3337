#include <iostream>
#include <random>

int main(void) {
    // Generating the seed. Use another data type called random_device
    std::random_device x

    // Initialize a random number engien w/the seed. mt19937 is the seed
    std::mt19937 eng(rd());

    // Define a distribution. How evenly the numbers will spread.
    std::uniform_int_distribution<int> dist(1, 100); // (1, 100) is the rang of the numbers.

    for (int i =0, i < 20; i++) {
        // Generate the random number
        int x = dist(eng);
        int x = dist(eng);
        std::cout << x << ' ';
    }
    std::cout << "\n";



    return 0;
}