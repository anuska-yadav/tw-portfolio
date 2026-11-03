# 07. Colours and Formatting in LaTeX

## 1. Introduction

LaTeX provides several tools to customize the appearance of a document. Colours, page margins, headers, footers, and page numbering can be adjusted to create professional and visually appealing documents.

This chapter covers colour formatting and common page layout customizations.

## 2. Using Colours in LaTeX

The `xcolor` package is used to add colours to text and other document elements.

Add the following command in the preamble:

```latex
\usepackage{xcolor}
```

## 3. Changing Text Colour

The `\textcolor` command changes the colour of specific text.

Syntax:

```latex
\textcolor{colour}{text}
```

Example:

```latex
\textcolor{red}{This text is red.}

\textcolor{blue}{This text is blue.}

\textcolor{green}{This text is green.}
```

## 4. Highlighting Text

The `\colorbox` command creates a coloured background behind text.

Example:

```latex
\colorbox{yellow}{Highlighted Text}
```

The `\fcolorbox` command adds both a coloured frame and a background.

Example:

```latex
\fcolorbox{red}{yellow}{Important Information}
```

Syntax:

```latex
\fcolorbox{border-colour}{background-colour}{text}
```

## 5. Defining Custom Colours

The `\definecolor` command allows users to create custom colours.

Syntax:

```latex
\definecolor{name}{model}{value}
```

Example:

```latex
\definecolor{myblue}{RGB}{30,100,200}

\textcolor{myblue}{This is custom blue text.}
```

Common colour models include:

| Model | Description |
|---|---|
| `RGB` | Red, Green, Blue values from 0 to 255 |
| `rgb` | Red, Green, Blue values between 0 and 1 |
| `HTML` | Six-digit hexadecimal colour code |
| `cmyk` | Cyan, Magenta, Yellow, Black |

Example using HTML:

```latex
\definecolor{mycolor}{HTML}{336699}
```

## 6. Page Margins

The `geometry` package provides control over page dimensions and margins.

Add:

```latex
\usepackage{geometry}
```

Example:

```latex
\geometry{margin=1in}
```

Different margins can also be specified:

```latex
\geometry{
    top=1in,
    bottom=1in,
    left=1.25in,
    right=1.25in
}
```

## 7. Headers and Footers

The `fancyhdr` package is used to customize page headers and footers.

Add:

```latex
\usepackage{fancyhdr}
```

Example:

```latex
\pagestyle{fancy}

\fancyhf{}

\lhead{Technical Writing}
\rhead{LaTeX}

\cfoot{\thepage}
```

### Explanation

- `\pagestyle{fancy}` enables the fancy page style.
- `\fancyhf{}` clears the default header and footer fields.
- `\lhead{}` sets the left header.
- `\rhead{}` sets the right header.
- `\cfoot{}` sets the centered footer.
- `\thepage` displays the current page number.

## 8. Page Numbering

LaTeX supports different page numbering styles.

Syntax:

```latex
\pagenumbering{style}
```

Common styles:

| Style | Description |
|---|---|
| `arabic` | 1, 2, 3, ... |
| `roman` | i, ii, iii, ... |
| `Roman` | I, II, III, ... |
| `alph` | a, b, c, ... |
| `Alph` | A, B, C, ... |

Example:

```latex
\pagenumbering{roman}
```

To restart page numbering:

```latex
\setcounter{page}{1}
```

## 9. Changing Page Orientation

The `geometry` package can also configure page orientation.

Example:

```latex
\usepackage[landscape]{geometry}
```

This changes the document to landscape orientation.

For a single landscape page, the `pdflscape` package provides the `landscape` environment.

```latex
\usepackage{pdflscape}
```

Example:

```latex
\begin{landscape}
This page is in landscape orientation.
\end{landscape}
```

## 10. Background Colour

The `xcolor` package provides the `\pagecolor` command to change the page background.

Example:

```latex
\pagecolor{lightgray}
```

To return to a white background:

```latex
\pagecolor{white}
```

## 11. Complete Example

```latex
\documentclass[12pt,a4paper]{article}

\usepackage{xcolor}
\usepackage{geometry}
\usepackage{fancyhdr}

\geometry{margin=1in}

\definecolor{myblue}{RGB}{30,100,200}

\pagestyle{fancy}
\fancyhf{}

\lhead{Technical Writing}
\rhead{LaTeX}
\cfoot{\thepage}

\begin{document}

\begin{center}
    {\Huge \textcolor{myblue}{Technical Writing}}
    
    \vspace{0.5cm}
    
    \colorbox{yellow}{LaTeX Formatting Example}
\end{center}

\section{Introduction}

This document demonstrates page formatting,
colours, headers, and footers in LaTeX.

\section{Conclusion}

LaTeX provides flexible document customization.

\end{document}
```

## 12. Summary

LaTeX provides several packages for customizing document appearance. The `xcolor` package manages colours, `geometry` controls page layout, and `fancyhdr` customizes headers and footers.

These features help create consistent and professional technical documents.

---

**Previous Chapter:** [Figures and Images](./06-figures-and-images.md)

**Next Chapter:** [Environments](./08-environments.md)

**Author:** Anuska Yadav