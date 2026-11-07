# 5. Documenting Functions and Classes in Doxygen

## 5.1 Introduction

Functions and classes are important components of object-oriented programming. Proper documentation helps developers understand their purpose, behavior, parameters, and relationships.

Doxygen provides special commands to generate structured documentation for functions, classes, constructors, destructors, and their members.

## 5.2 Documenting Functions

Functions can be documented by describing their purpose, input parameters, return values, and additional details.

The commonly used commands are:

- `@brief`: Provides a short description.
- `@details`: Provides additional information.
- `@param`: Describes function parameters.
- `@return`: Describes the returned value.
- `@pre`: Specifies preconditions.
- `@post`: Specifies postconditions.

Example:

```cpp
/**
 * @brief Calculates the sum of two integers.
 * @details Adds two given integers and returns their sum.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}
```

Doxygen extracts this information and displays it in the generated function documentation.

## 5.3 Documenting Function Parameters

The `@param` command describes the parameters accepted by a function.

It can also specify the direction of data transfer:

| Direction | Meaning |
|---|---|
| `in` | Parameter provides input to the function. |
| `out` | Parameter receives output from the function. |
| `in,out` | Parameter is used for both input and output. |

Example:

```cpp
/**
 * @brief Calculates the square of a number.
 * @param[in] n Input number.
 * @param[out] result Stores the calculated square.
 */
void calculateSquare(int n, int &result) {
    result = n * n;
}
```

Direction annotations help readers understand how parameters are used.

## 5.4 Documenting Constructors and Destructors

Constructors and destructors can be documented in the same way as other member functions.

Example:

```cpp
/**
 * @brief Represents a student.
 */
class Student {
private:
    string name;

public:
    /**
     * @brief Constructs a Student object.
     * @param studentName Name of the student.
     */
    Student(string studentName) {
        name = studentName;
    }

    /**
     * @brief Destroys the Student object.
     */
    ~Student() {
    }
};
```

Doxygen includes these descriptions in the class documentation.

## 5.5 Documenting Classes

The `@class` command can be used to explicitly document a class.

Example:

```cpp
/**
 * @class Student
 * @brief Represents a student in an institution.
 *
 * Stores student information and provides
 * functions to display the details.
 */
class Student {
public:
    string name;

    /**
     * @brief Displays student information.
     */
    void display() {
        cout << name;
    }
};
```

A documentation comment placed directly before a class declaration can also document that class without explicitly using `@class`.

## 5.6 Documenting Class Members

Doxygen can generate documentation for public, private, and protected members depending on the configuration.

Example:

```cpp
/**
 * @brief Represents a bank account.
 */
class BankAccount {
private:
    double balance; ///< Stores the current balance.

public:
    /// Stores the account holder's name.
    string accountHolder;

    /**
     * @brief Deposits money into the account.
     * @param amount Amount to deposit.
     */
    void deposit(double amount) {
        balance += amount;
    }
};
```

The `///<` notation provides documentation for a member on the same line.

## 5.7 Documenting Inheritance

Doxygen can automatically identify inheritance relationships between classes and display them using inheritance diagrams when graph generation is enabled.

Example:

```cpp
/**
 * @brief Base class for employees.
 */
class Employee {
public:
    /// Displays employee details.
    void display() {
    }
};

/**
 * @brief Represents a manager.
 *
 * Inherits from Employee.
 */
class Manager : public Employee {
};
```

Doxygen can generate a graphical representation of the inheritance relationship between `Employee` and `Manager`.

## 5.8 Documenting Templates

Doxygen also supports documentation of class templates and function templates.

Example:

```cpp
/**
 * @brief Returns the larger of two values.
 * @tparam T Data type of the values.
 * @param a First value.
 * @param b Second value.
 * @return The larger value.
 */
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
```

The `@tparam` command describes a template parameter.

## 5.9 Documenting Overloaded Functions

When multiple functions have the same name but different parameter lists, they are called overloaded functions.

Doxygen can distinguish between these functions and generate separate documentation entries.

Example:

```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the integers.
 */
int add(int a, int b);

/**
 * @brief Adds two floating-point numbers.
 * @param a First floating-point number.
 * @param b Second floating-point number.
 * @return Sum of the numbers.
 */
float add(float a, float b);
```

Each overloaded function can have its own documentation comment.

## 5.10 Important Configuration Options

Some configuration options influence how classes and their members appear in generated documentation.

| Configuration | Purpose |
|---|---|
| `EXTRACT_ALL` | Includes undocumented entities in the output. |
| `EXTRACT_PRIVATE` | Includes private class members. |
| `EXTRACT_STATIC` | Includes static members and functions. |
| `HIDE_UNDOC_MEMBERS` | Hides undocumented members. |
| `INLINE_INFO` | Displays inline information for documented functions. |
| `HIDE_SCOPE_NAMES` | Controls the display of scope names. |

These settings can be modified in the Doxygen configuration file.

## 5.11 Best Practices

1. Provide meaningful descriptions for every important function and class.
2. Document all function parameters.
3. Explain return values clearly.
4. Document constructors when their behavior is not obvious.
5. Use `@tparam` to describe template parameters.
6. Explain inheritance relationships when useful.
7. Keep documentation consistent with the actual implementation.
8. Avoid repeating information that is already clear from the code.

## 5.12 Conclusion

Doxygen provides several commands for documenting functions, classes, constructors, destructors, templates, and class members.

Proper documentation makes software easier to understand, maintain, and extend. It also helps developers quickly identify the purpose and behavior of different program components.