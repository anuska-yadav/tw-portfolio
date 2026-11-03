# 05. Tables in LaTeX

## 1. Introduction

Tables are used to organize and present information in rows and columns. LaTeX provides the `tabular` environment to create tables with structured formatting.

Tables are commonly used in academic reports, research papers, assignments, and technical documents.

## 2. Basic Table Structure

The `tabular` environment is used to create a table.

Example:

```latex
\begin{tabular}{|c|c|}
\hline
Name & Age \\
\hline
Anuska & 20 \\
Rahul & 21 \\
\hline
\end{tabular}
```

### Explanation

- `\begin{tabular}` starts the table.
- `{|c|c|}` defines two centered columns with vertical borders.
- `&` separates columns.
- `\\` ends a row.
- `\hline` creates a horizontal line.
- `\end{tabular}` ends the table.

## 3. Column Alignment

LaTeX provides three basic column alignment options.

| Symbol | Alignment |
|---|---|
| `l` | Left aligned |
| `c` | Center aligned |
| `r` | Right aligned |

Example:

```latex
\begin{tabular}{lcr}
Name & Subject & Marks \\
Anuska & Mathematics & 90 \\
Rahul & Physics & 85 \\
\end{tabular}
```

Each letter represents one column.

## 4. Adding Borders

Vertical and horizontal lines can be added to tables.

- `|` creates vertical borders.
- `\hline` creates horizontal borders.

Example:

```latex
\begin{tabular}{|l|c|r|}
\hline
Name & Subject & Marks \\
\hline
Anuska & Mathematics & 90 \\
Rahul & Physics & 85 \\
\hline
\end{tabular}
```

## 5. Creating a Table with a Caption

The `table` environment is used to create a floating table that can have a caption and label.

Example:

```latex
\begin{table}[h]
\centering
\caption{Student Marks}
\label{tab:marks}

\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Anuska & 90 \\
Rahul & 85 \\
\hline
\end{tabular}

\end{table}
```

### Explanation

- `[h]` suggests placing the table near its position in the source.
- `\centering` centers the table.
- `\caption{}` adds a caption.
- `\label{}` assigns a reference identifier.

LaTeX may reposition floating tables to achieve a better page layout.

## 6. Table Positioning

Common table placement options include:

| Option | Meaning |
|---|---|
| `h` | Approximately here |
| `t` | Top of the page |
| `b` | Bottom of the page |
| `p` | Separate page for floats |
| `!` | Relaxes some placement restrictions |

Example:

```latex
\begin{table}[htbp]
```

These are placement preferences, not absolute positioning commands.

## 7. Merging Columns

The `\multicolumn` command combines multiple columns into one cell.

Syntax:

```latex
\multicolumn{number}{alignment}{content}
```

Example:

```latex
\begin{tabular}{|c|c|c|}
\hline
\multicolumn{3}{|c|}{Student Details} \\
\hline
Name & Age & Marks \\
\hline
Anuska & 20 & 90 \\
\hline
\end{tabular}
```

## 8. Merging Rows

The `multirow` package is used to merge rows.

Add this package to the preamble:

```latex
\usepackage{multirow}
```

Example:

```latex
\begin{tabular}{|c|c|}
\hline
\multirow{2}{*}{CSE} & Student 1 \\
\cline{2-2}
                    & Student 2 \\
\hline
\end{tabular}
```

The `\multirow` command specifies the number of rows to combine and the cell content.

The `\cline{i-j}` command draws a horizontal line across selected columns.

## 9. Adjusting Column Width

The `p{}` column type creates a paragraph column with a specified width.

Example:

```latex
\begin{tabular}{|p{3cm}|p{5cm}|}
\hline
Topic & Description \\
\hline
LaTeX & A document preparation system used for technical writing. \\
\hline
\end{tabular}
```

Text inside a `p{}` column wraps automatically.

## 10. Improving Table Appearance

The `booktabs` package provides professional-looking horizontal rules.

Add:

```latex
\usepackage{booktabs}
```

Example:

```latex
\begin{tabular}{lc}
\toprule
Name & Marks \\
\midrule
Anuska & 90 \\
Rahul & 85 \\
\bottomrule
\end{tabular}
```

Common commands:

- `\toprule` creates the top rule.
- `\midrule` separates the header from the body.
- `\bottomrule` creates the bottom rule.

The `booktabs` package generally recommends avoiding vertical rules.

## 11. Complete Example

```latex
\documentclass{article}

\usepackage{multirow}
\usepackage{booktabs}

\begin{document}

\section{Student Performance}

\begin{table}[htbp]
\centering
\caption{Student Marks}
\label{tab:student-marks}

\begin{tabular}{lcc}
\toprule
Name & Mathematics & Physics \\
\midrule
Anuska & 90 & 85 \\
Rahul & 85 & 88 \\
Priya & 92 & 91 \\
\bottomrule
\end{tabular}

\end{table}

Table \ref{tab:student-marks} shows student performance.

\end{document}
```

## 12. Summary

The `tabular` environment is the foundation of table creation in LaTeX. Column alignment, borders, captions, labels, merged cells, and column widths help create structured tables.

Packages such as `multirow` and `booktabs` provide additional formatting capabilities.

---

**Previous Chapter:** [Mathematical Expressions](./04-mathematics.md)

**Next Chapter:** [Figures and Images](./06-figures-and-images.md)

**Author:** Anuska Yadav