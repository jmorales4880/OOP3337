#include "Student.hpp"
#include <iostream>

int main(void) {
    // Print total number of students
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;
	Student s1("Mark", 3.5);
	Student s2("Anna", 3.8);
	// Print total number of students
	std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    //s1.print();
   // s2.print();


    return 0;
}