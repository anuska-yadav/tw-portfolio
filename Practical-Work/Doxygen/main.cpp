/**
 * @file main.cpp
 * @brief Student result mini-project for Doxygen.
 * @details Demonstrates documented classes, functions, parameters and return values.
 */
#include <iostream>
#include <string>

/** @defgroup StudentModule Student Result Module
 *  @brief Classes and functions for displaying student results.
 *  @{
 */

/** @class Student
 *  @brief Stores a student's name and marks.
 */
class Student {
private:
    std::string name; /**< Name of the student. */
    int marks;        /**< Marks obtained out of 100. */

public:
    /** @brief Constructs a Student object.
     *  @param studentName Name of the student.
     *  @param studentMarks Marks obtained by the student.
     */
    Student(const std::string& studentName, int studentMarks)
        : name(studentName), marks(studentMarks) {}

    /** @brief Gets the student's name.
     *  @return The student's name.
     */
    std::string getName() const { return name; }

    /** @brief Checks whether the student passed.
     *  @return true when marks are at least 40; otherwise false.
     */
    bool hasPassed() const { return marks >= 40; }

    /** @brief Calculates a letter grade.
     *  @return A, B, C, or F according to the marks.
     */
    char calculateGrade() const {
        if (marks >= 80) return 'A';
        if (marks >= 60) return 'B';
        if (marks >= 40) return 'C';
        return 'F';
    }
};

/** @brief Displays a student's result.
 *  @param student Student whose result is displayed.
 */
void displayResult(const Student& student) {
    std::cout << "Name: " << student.getName() << '\n';
    std::cout << "Grade: " << student.calculateGrade() << '\n';
    std::cout << "Result: " << (student.hasPassed() ? "Pass" : "Fail") << '\n';
}

/** @} */

/** @brief Program entry point.
 *  @return 0 after successful completion.
 */
int main() {
    Student student("Student Name", 78);
    displayResult(student);
    return 0;
}
