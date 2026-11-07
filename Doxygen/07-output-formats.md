# 7. Output Formats in Doxygen

## 7.1 Introduction

Doxygen supports multiple output formats for generating software documentation. These formats allow developers to view, share, print, and maintain documentation according to their requirements.

The most commonly used output formats are:

1. HTML
2. LaTeX
3. PDF (generated through LaTeX)
4. XML
5. Man pages
6. RTF

## 7.2 HTML Documentation

HTML is one of the most commonly used output formats in Doxygen.

It generates documentation as a collection of web pages that can be opened in a browser.

HTML documentation provides:
- Navigation between classes, functions, and files.
- Search functionality.
- Hyperlinks between related program elements.
- Class and inheritance diagrams when enabled.

To enable HTML generation, configure the Doxyfile:

```ini
GENERATE_HTML = YES
HTML_OUTPUT = html
```

Run Doxygen:

```bash
doxygen Doxyfile
```

The generated documentation is generally available at:

```text
docs/html/index.html
```

Open it on macOS using:

```bash
open docs/html/index.html
```

## 7.3 LaTeX Documentation

LaTeX is a document preparation system commonly used to create professionally formatted technical documents.

Doxygen can generate LaTeX source files from the documentation comments.

To enable LaTeX generation, use:

```ini
GENERATE_LATEX = YES
LATEX_OUTPUT = latex
```

After running Doxygen:

```bash
doxygen Doxyfile
```

Doxygen generates LaTeX files in the specified output directory.

The main generated file is usually:

```text
docs/latex/refman.tex
```

This file contains the documentation in LaTeX format.

## 7.4 Generating PDF Documentation

Doxygen does not directly generate PDF documentation by itself. It generates LaTeX source files, which can then be compiled into a PDF using a LaTeX distribution.

For example, after generating the LaTeX output, navigate to the LaTeX directory:

```bash
cd docs/latex
```

Compile the main LaTeX file:

```bash
make
```

Alternatively, use:

```bash
pdflatex refman.tex
```

Depending on the document and its references, multiple compilation passes may be required.

The generated PDF is generally named:

```text
refman.pdf
```

## 7.5 XML Documentation

XML is a structured data format used to represent information in a machine-readable form.

Doxygen can generate XML output containing information about documented program elements.

To enable XML generation:

```ini
GENERATE_XML = YES
XML_OUTPUT = xml
```

After running Doxygen, XML files are generated in the specified output directory.

XML output is useful when integrating Doxygen documentation with other software tools and documentation systems.

## 7.6 Man Pages

Man pages are traditional documentation pages used in Unix-like operating systems.

They are commonly accessed through the terminal using the `man` command.

Doxygen can generate man pages for documented program elements.

Enable this feature using:

```ini
GENERATE_MAN = YES
MAN_OUTPUT = man
```

The generated files can be used as reference documentation in terminal-based environments.

## 7.7 RTF Documentation

RTF stands for Rich Text Format.

It is a document file format supported by many word processors.

Doxygen can generate RTF documentation that can be opened using compatible applications.

Enable RTF generation using:

```ini
GENERATE_RTF = YES
RTF_OUTPUT = rtf
```

RTF output is useful when developers need documentation in an editable document format.

## 7.8 Comparing Different Output Formats

| Format | Main Use |
|---|---|
| HTML | Browser-based documentation |
| LaTeX | Professionally formatted technical documents |
| PDF | Portable and printable documentation |
| XML | Machine-readable documentation |
| Man | Terminal-based reference documentation |
| RTF | Editable formatted documents |

## 7.9 Enabling Multiple Output Formats

Doxygen allows developers to enable multiple output formats in the same configuration file.

Example:

```ini
GENERATE_HTML = YES
GENERATE_LATEX = YES
GENERATE_XML = YES
GENERATE_MAN = YES
GENERATE_RTF = YES
```

When Doxygen is executed, it generates the enabled formats in their respective output directories.

## 7.10 Benefits of Multiple Output Formats

- Documentation can be accessed through different platforms.
- HTML provides convenient online navigation.
- PDF is useful for sharing and printing.
- XML allows integration with other tools.
- Man pages provide quick terminal references.
- RTF allows further editing in word processors.

## 7.11 Conclusion

Doxygen supports several output formats to make software documentation more accessible and useful.

Developers can choose HTML for browser-based documentation, PDF for portable documents, XML for software integration, and other formats depending on their requirements.

The ability to generate multiple formats from the same source code makes Doxygen a flexible documentation tool.