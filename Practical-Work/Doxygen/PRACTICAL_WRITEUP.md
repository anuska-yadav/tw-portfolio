# Practical: Automatic Documentation Using Doxygen

## Aim
To generate automatic documentation for a C++ program using Doxygen and Graphviz.

## Software required
1. C++ compiler such as Clang or GCC.
2. Doxygen.
3. Graphviz (`dot`).
4. A LaTeX distribution (optional, for PDF generation).

## Theory
Doxygen is a documentation-generation tool. It extracts specially formatted comments from source code and creates documentation in formats such as HTML, LaTeX and XML. Graphviz can be integrated with Doxygen to generate diagrams showing relationships between program elements.

## Procedure
1. Install Doxygen and Graphviz.
2. Verify installation using `doxygen --version` and `dot -V`.
3. Write a C++ program with Doxygen-style comments.
4. Configure the `Doxyfile`, especially `INPUT`, `OUTPUT_DIRECTORY`, output formats and Graphviz options.
5. Run `doxygen Doxyfile`.
6. Open `generated/html/index.html`.
7. Inspect the class, file, member and group documentation.
8. If a LaTeX distribution is installed, build the PDF from `generated/latex`.

## Important Doxyfile options
- `PROJECT_NAME`: project title.
- `INPUT`: source file or directory to document.
- `OUTPUT_DIRECTORY`: root directory for generated output.
- `GENERATE_HTML`: enables HTML documentation.
- `GENERATE_LATEX`: enables LaTeX output.
- `GENERATE_XML`: enables XML output.
- `EXTRACT_ALL`: includes entities even if not all have explicit documentation.
- `HAVE_DOT`: enables Graphviz integration.
- `CLASS_GRAPH`: enables class diagrams.
- `CALL_GRAPH` and `CALLER_GRAPH`: enable function call diagrams.

## Result
Documentation for the Student Result Management program is produced in HTML, LaTeX and XML formats. Graphviz diagrams are available where the source relationships allow them.

## Screenshots to capture on your Mac
1. Doxygen and Graphviz version checks.
2. `main.cpp` showing Doxygen comments.
3. Doxyfile showing `INPUT = main.cpp`.
4. Terminal after running `doxygen Doxyfile`.
5. HTML main page.
6. Student class documentation.
7. Graphviz class/call diagram.
8. LaTeX PDF, if generated.

## Viva questions
1. What is Doxygen?
2. What is the purpose of a Doxyfile?
3. What is the difference between `@brief` and `@details`?
4. What do `@param` and `@return` document?
5. Why is Graphviz used with Doxygen?
6. What is the purpose of `HAVE_DOT = YES`?
7. Does Doxygen itself compile LaTeX into PDF? (No; a LaTeX distribution is required.)
8. What is the difference between HTML, LaTeX and XML output?

## Precautions
- Run Doxygen from the directory containing the correct Doxyfile.
- Ensure `INPUT` points to the actual source file. In this practical it is `main.cpp`.
- Use valid comment syntax.
- PDF generation requires a separate LaTeX installation.
