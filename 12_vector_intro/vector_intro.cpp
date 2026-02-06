#include <iostream>
#include <vector>

void print(const std::vector<int>& v);
int main(void) {

    // Create a vector
    std::vector<int> v; // Empty vector (dynamic array) of integers

    // Create and initialize
    std::vector<int> v2 {1, 2, 10, 4, 5, 6};
    print(v2);

    // Provide the size and default value
    std::vector<int> v3(5, 10); // (5 elements, each set to 10)
        print(v3);

    // Copy from another vector
    std::vector<int> v4(v2);
        print(v4);

    // Get the size (number of elements)
    std::cout << "Size v: " << v.size() << std::endl;
    std::cout << "Size v2: " << v2.size() << std::endl;

    // First and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add the element to the end
    v2.push_back(8);
    v2.push_back(9);
        print(v2);

    // Remove from the end
    v4.pop_back();
        print(v4);

    // Iterator - object points to a certain location in the vector
    // begin() - points to the first element
    // end() - points to the one past the last element
    std::cout << *v2.begin() << std::endl;
    std::cout << *(v2.begin() + 2) << std::endl;

    // Insert (location (iterator), value)
    v2.insert(v2.begin() + 1, 1000);
        print(v2);

    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
    
    std::cout << v[i] << " ";
}

std::cout << std::endl;
}





/*#include <iostream>
#include <vector> //vector data structure (dynamic array)

void print(const std::vector<int>& v);

int main(void) {
    // Create a vector
    std::vector<int> v;  //template class. can call other classes. need to specificy which one. V is an empty vector of integers

    // Create and initilize the vector
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    // Provide the size and default value
    std::vector<int> v3(5, 9); // (5 elements, each set to 9)
    print(v3);

    // Copy from another vectors
    std::vector<int> v4(v2);
    print(v4);

    // Get the number of elements
    std::cout << "v2 size: " << v2.size() << std::endl;
    std::cout << "v size: " << v.size() << std::endl;

    // First and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add to the end of the vector
    v2.push_back(10);
    print(v2);

    // Remove the last element
    v3.pop_back(); // doens't need argument

/*  Iterators, are objects that point to certain locations in the vector.
    
    An object that acts like a point, providing a way to access and traverse the elements within a vector container.
    There are 2 iterators:
        begin() - points to the first element in the vector
        end() - points to the one past the last element


        std::cout *v2.begin() << std::endl;

        // Insert(locations (interator), vlaue)
        v2.insert(v2.begin() + 1, 1000);
        // v3.insert(v3.begin() + 5, 500);
        print(v2);



    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i v.size(); i++){
        std::cout << v[i] << " ";
    }
    std::cout << v[i]
}
*/

/* Vectors are dynamic whereas arrays aren't Vectors are arrays.
Vectors store elements of a single data type in contiiguous memory locations
You can create a string of vectors 

To create a vetor 
    #include <vector>
    std::vector<int> v
    std::vector<int> v2

How to get the current number of elements in the vector? v.size() gets you the number of elements.
How to get the first and the last elements?

How to delete an element from the vector? pop_back() is for at the end  and v.erase(v.begin() + 1) is for at any location



*/