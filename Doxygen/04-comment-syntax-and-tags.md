# 4. Comment Syntax and Tags in Doxygen

## 4.1 Introduction

Doxygen identifies specially formatted comments in source code and uses them to generate documentation.

These comments contain descriptive text and special commands called documentation tags. Tags provide structured information about functions, classes, variables, and other program elements.

Doxygen supports multiple comment styles and provides a large collection of commands to organize documentation.

## 4.2 Documentation Comment Styles

Doxygen supports different comment styles in C and C++.

### 1. Multiline documentation comments

The `/** ... */` style is commonly used for documenting functions and classes.

```cpp
/**
 * @brief Calculates the area of a rectangle.
 * @param length Length of the rectangle.
 * @param width Width of the rectangle.
 * @return Area of the rectangle.
 */
int area(int length, int width) {
    return length * width;
}
```

### 2. Single-line documentation comments

The `///` style is useful for short descriptions.

```cpp
/// Stores the name of a student.
string name;
```

Multiple consecutive `///` lines can also be used for longer descriptions.

### 3. Alternative multiline comments

Doxygen also supports the `/*! ... */` style.

```cpp
/*!
 * @brief Represents a bank account.
 * Contains information about account details.
 */
class BankAccount {
};
```

### 4. Alternative single-line comments

The `//!` style can be used to document program elements.

```cpp
//! Stores the total number of students.
int studentCount;
```

## 4.3 Understanding Documentation Tags

Doxygen provides special commands that begin with either `@` or `\`.

Both symbols represent the same command.

For example:

```cpp
@brief
```

and

```cpp
\brief
```

have identical meanings.

These commands help organize documentation into meaningful sections.

## 4.4 Commonly Used Documentation Tags

### 1. @brief

Provides a short description of a program element.

```cpp
/**
 * @brief Calculates the sum of two numbers.
 */
int add(int a, int b);
```

### 2. @details

Provides a detailed explanation of a program element.

```cpp
/**
 * @brief Calculates the square of a number.
 * @details Multiplies the given number by itself
 * to calculate its square.
 */
int square(int n);
```

### 3. @param

Describes the parameters passed to a function.

```cpp
/**
 * @brief Multiplies two numbers.
 * @param a First number.
 * @param b Second number.
 */
int multiply(int a, int b);
```

### 4. @return

Describes the value returned by a function.

```cpp
/**
 * @brief Finds the larger number.
 * @param a First number.
 * @param b Second number.
 * @return The larger of the two numbers.
 */
int maximum(int a, int b);
```

### 5. @author

Specifies the author of the code or documentation.

```cpp
/**
 * @brief Represents a calculator.
 * @author Student
 */
class Calculator {
};
```

### 6. @version

Specifies the version of a program or component.

```cpp
/**
 * @brief Performs mathematical operations.
 * @version 1.0
 */
class Calculator {
};
```

### 7. @date

Specifies the date associated with the documentation.

```cpp
/**
 * @brief Student management program.
 * @date 07 November 2026
 */
```

### 8. @note

Adds additional information that readers should notice.

```cpp
/**
 * @brief Divides two numbers.
 * @note The divisor must not be zero.
 */
```

### 9. @warning

Highlights a possible problem or dangerous operation.

```cpp
/**
 * @brief Accesses an array element.
 * @warning The index must be within valid array bounds.
 */
```

### 10. @see

References another related function, class, or documentation section.

```cpp
/**
 * @brief Calculates the square.
 * @see cube()
 */
int square(int n);
```

## 4.5 Additional Documentation Commands

Some other useful Doxygen commands include:

| Command | Purpose |
|---|---|
| `@file` | Documents a source file. |
| `@class` | Documents a class. |
| `@struct` | Documents a structure. |
| `@enum` | Documents an enumeration. |
| `@def` | Documents a macro definition. |
| `@todo` | Marks a task that needs to be completed. |
| `@bug` | Describes a known bug. |
| `@deprecated` | Marks an element as outdated or discouraged. |
| `@code` | Begins a code block. |
| `@endcode` | Ends a code block. |

Example:

```cpp
/**
 * @file main.cpp
 * @brief Main source file of the project.
 */

/**
 * @todo Add input validation.
 */
void processData() {
}
```

## 4.6 Documenting Code Examples

Doxygen can include code examples inside documentation using `@code` and `@endcode`.

Example:

```cpp
/**
 * @brief Demonstrates addition.
 *
 * Example:
 * @code
 * int result = add(10, 20);
 * cout << result;
 * @endcode
 */
int add(int a, int b) {
    return a + b;
}
```

This allows developers to include practical examples in the generated documentation.

## 4.7 Conditional Documentation

Doxygen supports conditional documentation using commands such as `@cond` and `@endcond`.

These commands allow selected documentation sections to be included or excluded depending on the configuration.

Example:

```cpp
/**
 * Public documentation.
 *
 * @cond INTERNAL
 * Internal implementation details.
 * @endcond
 */
```

The `INTERNAL` section can be controlled using the `ENABLED_SECTIONS` configuration option.

## 4.8 Best Practices for Using Tags

1. Use `@brief` to provide a clear summary.
2. Use `@param` for function parameters.
3. Use `@return` to explain returned values.
4. Use `@warning` for potentially unsafe operations.
5. Use `@note` for additional information.
6. Keep documentation relevant and accurate.
7. Use consistent comment styles throughout the project.
8. Avoid unnecessary or repeated documentation commands.

## 4.9 Conclusion

Documentation comments and tags are important features of Doxygen. They help developers organize technical information in a structured and understandable manner.

By using commands such as `@brief`, `@param`, `@return`, `@warning`, and `@code`, developers can create detailed documentation that improves software readability and maintainability.
