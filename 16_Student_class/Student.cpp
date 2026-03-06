#include <string>
#include <iostream>
#include "Student.hpp"

// Initialize static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.5;


Student::Student(const std::string& n, double g) : name(n), gpa(g) {
        total_students++;
		id = "U0000" + std::to_string(next_id); // Cat 2 strings
		next_id += 5; // adds 5 to the id
	}

int Student::getTotalStudents() {
	return total_students;
}

void Student::print() const {
	std::cout << '\n';
	std::cout << "ID: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "GPA: " << gpa << std::endl;
	//std::cout << "Can graduate: " << (canGraduate() ? "YES" : "NO") << std::endl; //TODO in hpp
	std::cout << '\n';
}








/*
Static and instance variable.
	static maintains the value throughout all instances
	Instance variables associated w/ particular obj of the class.


*/