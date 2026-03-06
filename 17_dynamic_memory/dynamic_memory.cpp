#include <iostream>

void printArr(int* arr, int size);
int* doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);
    
    int* doubled_array = doubleArr(arr, SIZE);
    printArr(arr, SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array, SIZE);

    for (int i = 0; i < 9999999; i++) {
        double* d = new double[9999999]; // Allocate new memory
        delete [] d; // Free the memory
    }

    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int* doubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int* doubleArrNew(const int* arr, int size) {
    // int new_arr[size]; // Local array (doesn't work)

    // Create an array dynamically
    int* new_arr = new int[size];
    
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}