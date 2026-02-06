#include <iostream>

//  Function prototype
void rotateRight(const int src[], int dest[], int size, int k); // K is the number of rotations

int main (void) {
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    // int list[SIZE] = {7, 6, 5, 4, 3, 2, 1};

    int new_list[SIZE];
    rotateRight(list, new_list, SIZE, 1);
    // Print the list
    for (int i : list) { // i is the range based for loop. not index count.
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    // Print the new list
    for (int i : new_list) { // i is the range based for loop. not index count.
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}

void rotateRight(const int src[], int dest[], int size, int k) { // fidn where the start is after rotations
    int new_first = size - (k % size);

    // Copy from new_first till the end of src

    int i = 0;
    int j = new_first;
    while (j < size) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Copy from the beginning of the src till new_first
    j = 0;
    while (j < new_first){
        dest[i] = src[j];
        i++;
        j++;
    }


}