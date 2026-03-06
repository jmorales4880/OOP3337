#include <iostream>
#include <string>
void printLecture(const std::string& title, int duration, int offer) {
    ....
}

void printCourse(const std::vector<std::String>& titles, const std::vector<int>& durations, const std::vector<int>& offers) {

}

// Create a structure

struct Lecture {
    std::string title;
    int duration;


};

void print(const struct Lecture& lecture) { //dot notation
    std::cout << lecture.duration << std::endl;
    std::cout << lecture.title << std::endl;

}