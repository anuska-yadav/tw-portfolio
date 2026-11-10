# Doxygen Practical Work — Workflow matching your 9 chapters

1. **Introduction:** Review what Doxygen generates and why.
2. **Installation and setup:** Install Doxygen and verify `doxygen --version`.
3. **Basic workflow:** Use the supplied C++ source, generate/configure a Doxyfile, run Doxygen, open HTML.
4. **Comment syntax and tags:** Inspect `@brief`, `@details`, `@param`, `@return`, and the `///` style in the source.
5. **Functions and classes:** Inspect the `Student` class, constructor, member functions, and `displayResult`.
6. **Grouping and diagrams:** Enable grouping and Graphviz diagrams in the Doxyfile if Graphviz is installed. Diagram availability depends on Graphviz and source relationships.
7. **Output formats:** HTML is enabled by default. To try LaTeX output, change `GENERATE_LATEX = YES`; PDF requires a LaTeX distribution and further compilation.
8. **Best practices and version control:** Keep source and Doxyfile in Git; generated HTML can be regenerated. Follow your course/repository preference about tracking generated output.
9. **Mini-project:** Compile and run the C++ program separately, then generate and browse its documentation.

## Run from this folder
`doxygen Doxyfile`

Open `html/index.html` after generation. Doxygen generates documentation; it does not compile or execute C++ code.
