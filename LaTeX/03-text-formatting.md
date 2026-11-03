# 03. Text Formatting in LaTeX

## 1. Introduction

LaTeX provides several commands to format text and control its appearance. Text formatting helps create readable, organized, and professional documents.

This chapter covers font styles, font sizes, alignment, lists, special characters, and line spacing.

## 2. Font Styles

LaTeX provides commands to change the appearance of text.

| Command | Result |
|---|---|
| `\textbf{}` | **Bold text** |
| `\textit{}` | *Italic text* |
| `\texttt{}` | Monospaced text |
| `\textsc{}` | Small capitals |
| `\underline{}` | Underlined text |
| `\emph{}` | Emphasized text |

Example:

```latex
\documentclass{article}

\begin{document}

\textbf{This is bold text.}

\textit{This is italic text.}

\texttt{This is monospaced text.}

\underline{This is underlined text.}

\emph{This is emphasized text.}

\end{document}
```

## 3. Font Sizes

LaTeX provides predefined font-size commands.

| Command | Description |
|---|---|
| `\tiny` | Very small |
| `\scriptsize` | Script size |
| `\footnotesize` | Footnote size |
| `\small` | Small |
| `\normalsize` | Normal size |
| `\large` | Large |
| `\Large` | Larger |
| `\LARGE` | Very large |
| `\huge` | Huge |
| `\Huge` | Largest predefined size |

Example:

```latex
{\small This is small text.}

{\large This is large text.}

{\Huge This is very large text.}
```

Curly braces limit the scope of the font-size change.

## 4. Text Alignment

LaTeX provides environments for text alignment.

### 4.1 Left Alignment

```latex
\begin{flushleft}
This text is aligned to the left.
\end{flushleft}
```

### 4.2 Center Alignment

```latex
\begin{center}
This text is centered.
\end{center}
```

### 4.3 Right Alignment

```latex
\begin{flushright}
This text is aligned to the right.
\end{flushright}
```

## 5. Lists

LaTeX supports different types of lists.

### 5.1 Unordered List

The `itemize` environment creates bullet points.

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

### 5.2 Ordered List

The `enumerate` environment creates numbered lists.

```latex
\begin{enumerate}
    \item First step
    \item Second step
    \item Third step
\end{enumerate}
```

### 5.3 Description List

The `description` environment creates lists with labels.

```latex
\begin{description}
    \item[Git] A version control system.
    \item[GitHub] A platform for hosting Git repositories.
\end{description}
```

## 6. Line Breaks and Paragraphs

### 6.1 New Paragraph

Leaving a blank line in the source creates a new paragraph.

```latex
This is the first paragraph.

This is the second paragraph.
```

### 6.2 Line Break

The `\\` command inserts a line break.

```latex
First line.\\
Second line.
```

Use line breaks when appropriate rather than inserting them between every sentence.

### 6.3 Horizontal Space

The following commands add horizontal space:

```latex
\quad
\qquad
\hspace{1cm}
```

## 7. Special Characters

Some characters have special meanings in LaTeX and must be escaped when used as ordinary text.

| Character | Command |
|---|---|
| `#` | `\#` |
| `$` | `\$` |
| `%` | `\%` |
| `&` | `\&` |
| `_` | `\_` |
| `{` | `\{` |
| `}` | `\}` |
| `~` | `\textasciitilde` |
| `^` | `\textasciicircum` |
| `\` | `\textbackslash` |

Example:

```latex
The success rate is 95\%.

The price is \$500.

Use C\_Programming as a filename.
```

## 8. Footnotes

Footnotes provide additional information at the bottom of a page.

Syntax:

```latex
\footnote{Footnote text}
```

Example:

```latex
LaTeX is widely used in research\footnote{Especially in scientific and mathematical publications.}.
```

## 9. Quotations

LaTeX provides environments for displaying quotations.

### Short Quotation

```latex
\begin{quote}
This is a short quotation.
\end{quote}
```

### Longer Quotation

```latex
\begin{quotation}
This environment is useful for longer quotations
that contain multiple paragraphs.
\end{quotation}
```

## 10. Line Spacing

The `setspace` package provides control over line spacing.

```latex
\usepackage{setspace}
```

Common commands:

```latex
\singlespacing
\onehalfspacing
\doublespacing
```

These commands are used inside the document body.

## 11. Complete Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{setspace}

\begin{document}

\begin{center}
    {\Large \textbf{Introduction to Programming}}
\end{center}

\onehalfspacing

\section{Introduction}

Programming is the process of writing instructions
that a computer can execute.

\section{Important Concepts}

\begin{itemize}
    \item Variables
    \item Data Types
    \item Functions
\end{itemize}

\section{Conclusion}

Programming helps solve real-world problems.

\end{document}
```

## 12. Summary

LaTeX provides commands and environments for controlling text appearance and layout. Font styles, sizes, alignment, lists, special characters, footnotes, and spacing help create structured and readable documents.

---

**Previous Chapter:** [Document Structure](./02-document-structure.md)

**Next Chapter:** [Mathematical Expressions](./04-mathematics.md)

**Author:** Anuska Yadav