# 3. Basic Workflow of Doxygen

## 3.1 Introduction

Doxygen follows a simple workflow to generate documentation from source code. Developers write documentation comments in their programs, configure Doxygen, and execute it to generate the required documentation.

The basic workflow consists of the following steps:

1. Write source code.
2. Add documentation comments.
3. Generate a Doxygen configuration file.
4. Configure the documentation settings.
5. Run Doxygen.
6. View the generated documentation.

## 3.2 Step 1: Create a Source Code File

First, create a source code file containing the program that needs documentation.

For example, create a file named `main.cpp`.

```cpp
#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(10, 20);
    return 0;
}
```

The documentation comments provide information about the function and its parameters.

## 3.3 Step 2: Generate a Configuration File

Doxygen uses a configuration file to determine how documentation should be generated.

Open the terminal in the project directory and execute:

```bash
doxygen -g Doxyfile
```

This command generates a default configuration file named `Doxyfile`.

The configuration file contains several settings that control the documentation generation process.

## 3.4 Step 3: Configure Doxygen

Open the generated `Doxyfile` in a text editor.

Some important configuration options are:

| Configuration | Purpose |
|---|---|
| `PROJECT_NAME` | Specifies the project name. |
| `OUTPUT_DIRECTORY` | Specifies where generated documentation is stored. |
| `INPUT` | Specifies the source files or directories. |
| `FILE_PATTERNS` | Specifies the file types to process. |
| `RECURSIVE` | Enables searching through subdirectories. |
| `GENERATE_HTML` | Enables HTML documentation generation. |
| `GENERATE_LATEX` | Enables LaTeX documentation generation. |
| `EXTRACT_ALL` | Includes all documented and undocumented entities in the output. |

For a basic project, some example settings are:

```ini
PROJECT_NAME = "My First Project"

OUTPUT_DIRECTORY = docs

INPUT = main.cpp

FILE_PATTERNS = *.cpp *.h

RECURSIVE = NO

GENERATE_HTML = YES

GENERATE_LATEX = NO

EXTRACT_ALL = YES
```

These settings tell Doxygen to process `main.cpp` and generate HTML documentation inside the `docs` directory.

## 3.5 Step 4: Run Doxygen

After configuring the Doxyfile, execute the following command:

```bash
doxygen Doxyfile
```

Doxygen reads the configuration file, processes the source code, extracts documentation comments, and generates the output.

If the command executes successfully, the documentation files will be created in the specified output directory.

## 3.6 Step 5: View the Generated Documentation

When HTML generation is enabled, Doxygen creates an HTML documentation website.

Navigate to the generated HTML directory and open `index.html` in a web browser.

For example, with the configuration shown above:

```bash
open docs/html/index.html
```

The generated website contains information about the documented functions, classes, files, and other program elements.

## 3.7 Understanding the Complete Workflow

The overall Doxygen workflow can be represented as:

```text
      Source Code
           |
           v
   Documentation Comments
           |
           v
   Generate Doxyfile
           |
           v
  Configure Doxyfile
           |
           v
    Run Doxygen
           |
           v
  Generated Documentation
           |
           v
   View HTML Documentation
```

## 3.8 Conclusion

Doxygen simplifies the process of creating and maintaining technical documentation.

By adding documentation comments to source code and configuring the Doxyfile, developers can automatically generate structured documentation in formats such as HTML and LaTeX.

This workflow helps developers understand, maintain, and share information about software projects more effectively.