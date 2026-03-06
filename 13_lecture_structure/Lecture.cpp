#include <iostream>
#include <string>

// Create a description of Lecture structure
typedef struct {
    std::string title;
    int duration;
    // int location;
} Lecture;

// Create a function that takes a Lecture structure as input
void printLecture(const Lecture& lecture) { // becomes a constant reference.
    std::cout << "Title:\t\t" << lecture.title << std::endl;
    std::cout << "Duration:\t" << lecture.duration << std::endl;

}

int main (void) {
    // Create an object of Lecture structure
    Lecture oop_lecture; //oop_lecture is the thing being created

    // Access the properties (atributes, data members) of Lecture object
    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 60 * 50;
    // oop_lecture.location = "IST2020";

    printLecture(oop_lecture); //passes the oop_lecture here


    return 0;
}