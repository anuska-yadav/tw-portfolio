# Doxygen commands
```bash
doxygen --version
g++ main.cpp -o student_result
./student_result
doxygen -g Doxyfile
doxygen Doxyfile
```
The supplied Doxyfile is ready to run; `doxygen -g Doxyfile` is only needed if you want to generate a fresh default configuration file. On macOS/Linux, compile using the commands above. On Windows, use a C++ compiler available on your system and run the resulting executable. If `HAVE_DOT` causes warnings because Graphviz is not installed, install Graphviz or set `HAVE_DOT = NO`.
