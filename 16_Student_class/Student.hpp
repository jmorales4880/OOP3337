#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
public:
    // Constructor
    Student(const std::string& n, double g);

    // Get function
    static int getTotalStudents();

    void print() const;
    // Set method
    static void setGraduationRequirement(double newGPA); // newGPA [2.0; 4.0] TODO



private:
    std::string name;
	double gpa;
	static int total_students;
    static int next_id; // Generate unique ID
    std::string id;
    static double goodGPA; 
};




#endif
