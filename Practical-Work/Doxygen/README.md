# Doxygen Practical — Student Result Management

## Aim
Generate source-code documentation for a C++ program using Doxygen and Graphviz.

## Included
- `main.cpp` — fully documented C++ mini-project
- `Doxyfile` — corrected configuration (`INPUT = main.cpp`)
- `PRACTICAL_WRITEUP.md` — aim, theory, procedure, result and viva preparation
- `README_COMMANDS.md` — commands and Doxygen tags
- `generated/html/` — prebuilt HTML reference preview with class pages and Graphviz SVG diagrams
- `generated/xml/` — XML reference output sample
- `generated/latex/` — LaTeX source starter and build instructions
- `screenshots/` — place your own terminal/browser screenshots here

## Important note about generated files
The included HTML pages are a **prebuilt reference preview** so you can open and inspect the documentation immediately. They are not represented as a native Doxygen run from this environment. To generate the authentic output using the Doxygen 1.18.0 installation on your Mac, run the command below. It will regenerate `generated/html`, `generated/latex`, and `generated/xml` from `main.cpp` using your installed Doxygen and Graphviz.

## Generate authentic Doxygen output on macOS
From this folder:

```bash
doxygen --version
dot -V
doxygen Doxyfile
open generated/html/index.html
```

## Compile and run the C++ program
```bash
clang++ -std=c++17 main.cpp -o student_result
./student_result
```

## Generate PDF
Doxygen produces LaTeX source. If MacTeX/TeX Live is installed:

```bash
cd generated/latex
make
```

The PDF is normally named `refman.pdf`. Doxygen itself does not compile LaTeX to PDF; a LaTeX distribution is required.
