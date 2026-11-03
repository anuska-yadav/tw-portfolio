# 08. Environments in LaTeX

## 1. Introduction

Environments are used in LaTeX to organize and format different types of content. An environment begins with `\begin{environment-name}` and ends with `\end{environment-name}`.

They are useful for creating lists, quotations, tables, figures, mathematical expressions, and other structured content.

## 2. Basic Environment Syntax

Every environment follows this general structure:

```latex
\begin{environment-name}

    Content goes here.

\end{environment-name}
```

The beginning and ending commands must use the same environment name.

## 3. Itemize Environment

The `itemize` environment creates an unordered list using bullet points.

Example:

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

## 4. Enumerate Environment

The `enumerate` environment creates an ordered, numbered list.

Example:

```latex
\begin{enumerate}
    \item Introduction
    \item Main Content
    \item Conclusion
\end{enumerate}
```

## 5. Description Environment

The `description` environment creates a list with descriptive labels.

Example:

```latex
\begin{description}
    \item[HTML] HyperText Markup Language.
    \item[CSS] Cascading Style Sheets.
    \item[JavaScript] A programming language for the web.
\end{description}
```

## 6. Center Environment

The `center` environment centers text or other content.

Example:

```latex
\begin{center}
    Welcome to LaTeX!
\end{center}
```

## 7. Flushleft and Flushright Environments

These environments control horizontal text alignment.

### Left Alignment

```latex
\begin{flushleft}
    This text is aligned to the left.
\end{flushleft}
```

### Right Alignment

```latex
\begin{flushright}
    This text is aligned to the right.
\end{flushright}
```

## 8. Quote and Quotation Environments

These environments display quoted text.

### Quote

```latex
\begin{quote}
    This is a short quotation.
\end{quote}
```

### Quotation

```latex
\begin{quotation}
    This environment is suitable for longer quotations
    that may contain multiple paragraphs.
\end{quotation}
```

## 9. Verbatim Environment

The `verbatim` environment displays text exactly as written in the source.

LaTeX commands inside this environment are not executed.

Example:

```latex
\begin{verbatim}
\textbf{This command appears as plain text.}
\end{verbatim}
```

It is useful for displaying code snippets and LaTeX commands.

## 10. Mathematical Environments

LaTeX provides environments for writing mathematical expressions.

The `amsmath` package provides additional mathematical environments.

Add this package to the preamble:

```latex
\usepackage{amsmath}
```

### 10.1 Equation

The `equation` environment creates a numbered equation.

```latex
\begin{equation}
    a^2 + b^2 = c^2
\end{equation}
```

### 10.2 Align

The `align` environment aligns multiple equations.

```latex
\begin{align}
    x + y &= 10 \\
    x - y &= 2
\end{align}
```

### 10.3 Gather

The `gather` environment centers multiple equations without aligning them at a particular symbol.

```latex
\begin{gather}
    x + y = 10 \\
    x - y = 2
\end{gather}
```

### 10.4 Matrix

The `matrix` environment creates a matrix.

```latex
\[
\begin{matrix}
    1 & 2 \\
    3 & 4
\end{matrix}
\]
```

## 11. Nested Environments

An environment can be placed inside another environment.

Example:

```latex
\begin{itemize}
    \item Programming Languages

    \begin{enumerate}
        \item C
        \item C++
        \item Python
    \end{enumerate}

    \item Web Technologies
\end{itemize}
```

Nested environments help organize complex content.

## 12. Custom Environments

LaTeX allows users to define their own environments using the `\newenvironment` command.

Syntax:

```latex
\newenvironment{name}
{beginning commands}
{ending commands}
```

Example:

```latex
\newenvironment{mybox}
{\begin{quote}\itshape}
{\end{quote}}
```

Usage:

```latex
\begin{mybox}
    This is a custom environment.
\end{mybox}
```

The custom environment starts with italic text inside a quotation block and closes that block at the end.

## 13. Complete Example

```latex
\documentclass{article}

\usepackage{amsmath}

\title{Introduction to LaTeX Environments}
\author{Anuska Yadav}
\date{\today}

\begin{document}

\maketitle

\section{Lists}

\begin{itemize}
    \item C
    \item C++
    \item Python
\end{itemize}

\section{Mathematics}

\begin{equation}
    E = mc^2
\end{equation}

\begin{align}
    x + y &= 10 \\
    x - y &= 2
\end{align}

\section{Quotation}

\begin{quote}
    LaTeX is a powerful document preparation system.
\end{quote}

\end{document}
```

## 14. Summary

Environments provide a structured way to organize content in LaTeX. Common environments include `itemize`, `enumerate`, `description`, `center`, `quote`, `verbatim`, and mathematical environments such as `equation` and `align`.

Custom environments can also be created using `\newenvironment`.

---

**Previous Chapter:** [Colours and Formatting](./07-colours-and-formatting.md)

**Back to:** [LaTeX Documentation](./README.md)

**Author:** Anuska Yadav