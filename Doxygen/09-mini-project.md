# 9. Mini Project: Generating Documentation Using Doxygen

## 9.1 Introduction

This mini project demonstrates how Doxygen can be used to generate technical documentation for a simple C++ application.

The project implements a basic calculator that performs arithmetic operations such as addition, subtraction, multiplication, and division.

Doxygen documentation comments are added to the source code, and a configuration file is used to generate HTML documentation.

## 9.2 Objectives

The main objectives of this project are:

- To understand how Doxygen works in a practical application.
- To write documentation comments in C++ source code.
- To create and configure a Doxyfile.
- To generate HTML documentation.
- To view the generated documentation in a web browser.

## 9.3 Project Structure

The project uses the following directory structure:

```text
Doxygen-Mini-Project/
│
├── main.cpp
├── Doxyfile
└── docs/
    └── html/
        └── index.html
```

The `main.cpp` file contains the calculator implementation.

The `Doxyfile` contains configuration settings for documentation generation.

The `docs` directory stores the generated documentation.

## 9.4 Step 1: Writing the C++ Source Code

Create a file named `main.cpp`.

```cpp
#include <iostream>
using namespace std;

/**
 * @file main.cpp
 * @brief Implementation of a basic calculator.
 */

/**
 * @class Calculator
 * @brief Performs basic arithmetic operations.
 *
 * This class provides functions for addition,
 * subtraction, multiplication, and division.
 */
class Calculator {
public:

    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Sum of the two numbers.
     */
    double add(double a, double b) {
        return a + b;
    }

    /**
     * @brief Subtracts two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Difference between the numbers.
     */
    double subtract(double a, double b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Product of the numbers.
     */
    double multiply(double a, double b) {
        return a * b;
    }

    /**
     * @brief Divides two numbers.
     * @param a Dividend.
     * @param b Divisor.
     * @return Quotient of the two numbers.
     * @warning The divisor must not be zero.
     */
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }

        return a / b;
    }
};

/**
 * @brief Main function of the calculator program.
 * @return Returns 0 when execution is successful.
 */
int main() {
    Calculator calc;

    cout << "Addition: " << calc.add(10, 5) << endl;
    cout << "Subtraction: " << calc.subtract(10, 5) << endl;
    cout << "Multiplication: " << calc.multiply(10, 5) << endl;
    cout << "Division: " << calc.divide(10, 5) << endl;

    return 0;
}
```

## 9.5 Step 2: Compile and Execute the Program

Compile the source code using a C++ compiler.

```bash
g++ main.cpp -o calculator
```

Execute the program:

```bash
./calculator
```

Expected output:

```text
Addition: 15
Subtraction: 5
Multiplication: 50
Division: 2
```

## 9.6 Step 3: Generate the Doxygen Configuration File

Open the terminal inside the project directory and execute:

```bash
doxygen -g Doxyfile
```

This generates a default configuration file named `Doxyfile`.

## 9.7 Step 4: Configure the Doxyfile

Open the Doxyfile and modify the following settings:

```ini
PROJECT_NAME = "Calculator Project"

PROJECT_NUMBER = 1.0

OUTPUT_DIRECTORY = docs

INPUT = main.cpp

FILE_PATTERNS = *.cpp *.h

RECURSIVE = NO

EXTRACT_ALL = YES

GENERATE_HTML = YES

HTML_OUTPUT = html

GENERATE_LATEX = NO

HAVE_DOT = YES

CLASS_GRAPH = YES
```

These settings specify the project name, source files, output directory, and documentation formats.

The `EXTRACT_ALL` option ensures that undocumented program elements are also included in the generated documentation.

## 9.8 Step 5: Generate Documentation

Execute the following command:

```bash
doxygen Doxyfile
```

Doxygen processes the source code, extracts the documentation comments, and generates HTML documentation.

The generated files are stored inside:

```text
docs/html/
```

## 9.9 Step 6: View the Generated Documentation

Open the generated HTML documentation in a web browser.

On macOS, execute:

```bash
open docs/html/index.html
```

The generated website provides information about:

- The Calculator class.
- Its member functions.
- Function parameters.
- Return values.
- Documentation descriptions.
- Class relationships and diagrams, where applicable.

## 9.10 Understanding the Generated Documentation

The generated documentation is organized into different sections.

**Main Page:** Displays the project documentation.

**Classes:** Shows the documented classes and their descriptions.

**Class Members:** Lists member functions and other documented members.

**Files:** Displays source files included in the documentation.

**Function Details:** Provides detailed descriptions of functions, their parameters, and return values.

## 9.11 Advantages of the Mini Project

This project demonstrates several advantages of using Doxygen:

1. Automatically generates documentation from source code.
2. Reduces the effort required to prepare technical documentation manually.
3. Provides structured information about classes and functions.
4. Makes software easier to understand and maintain.
5. Generates browser-based documentation.
6. Helps developers maintain documentation alongside source code.

## 9.12 Conclusion

This mini project demonstrates the complete process of generating technical documentation using Doxygen.

By adding documentation comments to a C++ program, creating a configuration file, and executing Doxygen, developers can automatically generate structured HTML documentation.

The project illustrates how Doxygen simplifies software documentation and improves the readability and maintainability of C++ applications.