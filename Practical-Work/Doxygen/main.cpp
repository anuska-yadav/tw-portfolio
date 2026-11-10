/**
 * @file main.cpp
 * @brief Student Result Management mini-project.
 * @details Demonstrates Doxygen documentation for a class, data members,
 * member functions, parameters, return values, groups and call relationships.
 * @author Anuska Yadav
 * @date 2026
 */

#include <iostream>
#include <string>

/**
 * @defgroup StudentModule Student Result Module
 * @brief Classes and functions used to display a student's result.
 * @{
 */

/**
 * @class Student
 * @brief Stores a student's name and marks.
 *
 * The class provides functions to retrieve student information,
 * check the pass status and calculate a letter grade.
 */
class Student {
private:
    std::string name; /**< Name of the student. */
    int marks;        /**< Marks obtained out of 100. */

public:
    /**
     * @brief Constructs a Student object.
     * @param studentName Name of the student.
     * @param studentMarks Marks obtained by the student (0-100).
     */
    Student(const std::string& studentName, int studentMarks)
        : name(studentName), marks(studentMarks) {}

    /**
     * @brief Gets the student's name.
     * @return The student's name.
     */
    std::string getName() const {
        return name;
    }

    /**
     * @brief Gets the marks obtained by the student.
     * @return Marks out of 100.
     */
    int getMarks() const {
        return marks;
    }

    /**
     * @brief Checks whether the student passed.
     * @return true if marks are at least 40; otherwise false.
     */
    bool hasPassed() const {
        return marks >= 40;
    }

    /**
     * @brief Calculates the student's letter grade.
     * @return A for 80+, B for 60-79, C for 40-59, otherwise F.
     */
    char calculateGrade() const {
        if (marks >= 80) return 'A';
        if (marks >= 60) return 'B';
        if (marks >= 40) return 'C';
        return 'F';
    }
};

/**
 * @brief Displays a student's result on the console.
 * @param student Student object whose result is displayed.
 */
void displayResult(const Student& student) {
    std::cout << "Name: " << student.getName() << '\n';
    std::cout << "Marks: " << student.getMarks() << "/100\n";
    std::cout << "Grade: " << student.calculateGrade() << '\n';
    std::cout << "Result: " << (student.hasPassed() ? "Pass" : "Fail") << '\n';
}

/** @} */

/**
 * @brief Program entry point.
 * @return 0 after successful execution.
 */
int main() {
    Student student("Anuska Yadav", 78);
    displayResult(student);
    return 0;
}
