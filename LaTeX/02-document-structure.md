# 02. Document Structure in LaTeX

## 1. Introduction

A LaTeX document follows a predefined structure. It is generally divided into two main parts:

1. Preamble
2. Document body

The preamble contains document settings and package declarations, while the document body contains the actual content.

## 2. Basic Structure

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{graphicx}
\usepackage{amsmath}

\title{My First LaTeX Document}
\author{Anuska Yadav}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is the introduction section.

\section{Conclusion}
This is the conclusion section.

\end{document}
```

## 3. Understanding the Preamble

The preamble begins immediately after the `\documentclass` command and ends before `\begin{document}`.

It defines the document's configuration.

### 3.1 Document Class

The `\documentclass` command specifies the type and general layout of the document.

Syntax:

```latex
\documentclass[options]{class}
```

Example:

```latex
\documentclass[12pt,a4paper]{article}
```

Common options:

| Option | Meaning |
|---|---|
| `10pt` | Sets the base font size to 10 points |
| `11pt` | Sets the base font size to 11 points |
| `12pt` | Sets the base font size to 12 points |
| `a4paper` | Uses A4 paper size |
| `letterpaper` | Uses US Letter paper size |
| `twocolumn` | Formats the document in two columns |

### 3.2 Packages

Packages extend LaTeX functionality.

Syntax:

```latex
\usepackage{package-name}
```

Examples:

```latex
\usepackage{graphicx}
\usepackage{amsmath}
\usepackage{xcolor}
\usepackage{hyperref}
```

| Package | Purpose |
|---|---|
| `graphicx` | Inserting and scaling images |
| `amsmath` | Advanced mathematical expressions |
| `xcolor` | Using colours |
| `hyperref` | Creating hyperlinks |
| `geometry` | Customizing page margins |

### 3.3 Title Information

The title, author, and date can be defined in the preamble.

```latex
\title{Technical Writing}
\author{Anuska Yadav}
\date{\today}
```

The `\maketitle` command displays this information in the document.

## 4. Document Body

The document body begins with:

```latex
\begin{document}
```

It ends with:

```latex
\end{document}
```

All visible document content is placed between these commands.

## 5. Sections and Subsections

LaTeX provides commands to organize documents hierarchically.

```latex
\section{Introduction}

\subsection{Background}

\subsubsection{History}
```

Common sectioning commands:

| Command | Purpose |
|---|---|
| `\part{}` | Divides a large document into parts |
| `\chapter{}` | Creates a chapter in supported classes |
| `\section{}` | Creates a section |
| `\subsection{}` | Creates a subsection |
| `\subsubsection{}` | Creates a smaller subsection |
| `\paragraph{}` | Creates a paragraph heading |

Note: The `article` class does not support `\chapter`.

## 6. Table of Contents

LaTeX can automatically generate a table of contents.

```latex
\tableofcontents
```

It collects section headings and their page numbers.

Depending on the document and compiler, multiple compilations may be required to update the table of contents correctly.

## 7. Page Breaks

The following commands control page breaks:

```latex
\newpage
```

Starts a new page.

```latex
\clearpage
```

Starts a new page after processing pending floating figures and tables.

## 8. Comments in LaTeX

The percentage symbol `%` is used to write comments.

```latex
% This is a comment

\section{Introduction}
This is visible content.
```

Comments are ignored during compilation.

## 9. Complete Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{geometry}
\geometry{margin=1in}

\title{My Academic Report}
\author{Anuska Yadav}
\date{\today}

\begin{document}

\maketitle

\tableofcontents

\section{Introduction}
This section introduces the topic.

\subsection{Background}
This subsection provides background information.

\section{Main Content}
This section contains the main discussion.

\section{Conclusion}
This section summarizes the report.

\end{document}
```

## 10. Summary

A LaTeX document consists of a preamble and a document body. The preamble defines document settings, packages, and title information. The body contains the actual content, organized using sections, subsections, and other structural commands.

---

**Previous Chapter:** [Introduction to LaTeX](./01-introduction.md)

**Next Chapter:** [Text Formatting](./03-text-formatting.md)

**Author:** Anuska Yadav