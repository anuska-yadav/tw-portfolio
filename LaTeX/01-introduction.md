# 01. Introduction to LaTeX

## 1. What is LaTeX?

LaTeX is a document preparation system used to create professionally formatted documents. It is built on top of the TeX typesetting system.

Unlike word processors, where formatting is usually applied directly to text, LaTeX uses commands and markup to describe the structure and appearance of a document.

It is widely used in academic and technical fields, especially for documents containing mathematical equations, scientific notation, tables, and references.

## 2. Why Use LaTeX?

LaTeX offers several advantages:

- **Professional formatting:** Produces clean and consistent documents.
- **Mathematical typesetting:** Supports complex mathematical equations.
- **Automatic numbering:** Numbers sections, figures, tables, and equations.
- **Bibliography management:** Supports references and citations.
- **Cross-referencing:** Allows references to sections, figures, and equations.
- **Portability:** Source files can be edited on different operating systems.
- **Large document support:** Suitable for reports, research papers, theses, and books.

## 3. LaTeX vs. Traditional Word Processors

| Feature | LaTeX | Traditional Word Processor |
|---|---|---|
| Formatting | Command-based | Usually visual |
| Equations | Excellent support | Varies by application |
| Large documents | Well suited | Can become difficult to manage |
| References | Automated | Often requires manual or add-on support |
| Learning curve | Requires learning commands | Generally easier initially |

## 4. How LaTeX Works

A LaTeX document is written in a source file with the `.tex` extension.

The source file contains:
- Text and document content.
- LaTeX commands.
- Formatting instructions.
- Packages required for additional features.

A LaTeX compiler processes the source file and generates an output document, commonly a PDF.

### Basic Workflow

1. Write the document in a `.tex` file.
2. Include the required commands and packages.
3. Compile the source file.
4. Review the generated PDF.
5. Correct errors and compile again.

## 5. Basic LaTeX Example

```latex
\documentclass{article}

\begin{document}

Hello, World!

This is my first LaTeX document.

\end{document}
```

### Explanation

- `\documentclass{article}` specifies the document type.
- `\begin{document}` marks the beginning of the document content.
- `\end{document}` marks the end of the document.
- Text written between these commands appears in the output.

## 6. Common Document Classes

LaTeX provides different document classes for different purposes.

| Document Class | Purpose |
|---|---|
| `article` | Articles and short reports |
| `report` | Longer reports and academic documents |
| `book` | Books and large publications |
| `letter` | Formal letters |
| `beamer` | Presentations |

## 7. LaTeX Editors and Platforms

Some commonly used LaTeX editors and platforms are:

- **Overleaf:** An online LaTeX editor that works in a web browser.
- **TeXstudio:** A desktop LaTeX editor.
- **Visual Studio Code:** Can be configured for LaTeX development.
- **TeXworks:** A graphical LaTeX editor.

## 8. Applications of LaTeX

LaTeX is commonly used for:

- Academic assignments and reports.
- Research papers and journal articles.
- Project documentation.
- Mathematical and scientific publications.
- Books and technical manuals.
- Presentations using Beamer.

## 9. Summary

LaTeX is a powerful document preparation system designed for creating structured and professionally formatted documents. Its support for mathematical expressions, automatic numbering, references, and consistent formatting makes it especially useful in academic and technical writing.

---

**Next Chapter:** [Document Structure](./02-document-structure.md)

**Author:** Anuska Yadav