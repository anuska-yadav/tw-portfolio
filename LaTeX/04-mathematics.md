# 04. Mathematical Expressions in LaTeX

## 1. Introduction

LaTeX is widely used for mathematical and scientific documents because it provides powerful tools for writing equations, mathematical symbols, fractions, matrices, and other expressions.

Mathematical expressions can be written in two main modes:

1. Inline mathematics
2. Display mathematics

## 2. Inline Mathematics

Inline mathematics is used when an equation or expression needs to appear within a sentence.

It can be written using `$...$` or `\(...\)`.

Example:

```latex
The equation of a straight line is $y = mx + c$.
```

The mathematical expression appears within the normal text.

## 3. Display Mathematics

Display mathematics places an equation on a separate line.

Example:

```latex
\[
a^2 + b^2 = c^2
\]
```

Display equations are useful when mathematical expressions need more emphasis or space.

## 4. Fractions

The `\frac{}{}` command is used to create fractions.

Syntax:

```latex
\frac{numerator}{denominator}
```

Example:

```latex
\[
\frac{a+b}{c+d}
\]
```

For inline expressions, `\dfrac{}{}` from the `amsmath` package can be used to display a larger fraction.

## 5. Superscripts and Subscripts

LaTeX uses special symbols to represent powers and indices.

| Symbol | Purpose |
|---|---|
| `^` | Superscript |
| `_` | Subscript |

Examples:

```latex
\[
x^2 + y^2
\]

\[
a_1 + a_2 + a_3
\]

\[
x_1^2 + x_2^2
\]
```

For multiple characters, use curly braces:

```latex
\[
x^{10}, \quad a_{123}
\]
```

## 6. Square Roots and Other Roots

The `\sqrt{}` command represents a square root.

Example:

```latex
\[
\sqrt{x^2+y^2}
\]
```

For an nth root:

```latex
\[
\sqrt[n]{x}
\]
```

## 7. Common Mathematical Symbols

LaTeX provides commands for many mathematical symbols.

| Symbol | LaTeX Command |
|---|---|
| \( \alpha \) | `\alpha` |
| \( \beta \) | `\beta` |
| \( \theta \) | `\theta` |
| \( \pi \) | `\pi` |
| \( \infty \) | `\infty` |
| \( \leq \) | `\leq` |
| \( \geq \) | `\geq` |
| \( \neq \) | `\neq` |
| \( \approx \) | `\approx` |
| \( \times \) | `\times` |
| \( \div \) | `\div` |
| \( \pm \) | `\pm` |
| \( \sum \) | `\sum` |
| \( \prod \) | `\prod` |
| \( \int \) | `\int` |

## 8. Greek Letters

Greek letters are commonly used in mathematics and science.

Examples:

```latex
\[
\alpha, \beta, \gamma, \delta, \theta, \lambda
\]

\[
\Gamma, \Delta, \Theta, \Lambda, \Omega
\]
```

Lowercase Greek letters generally begin with lowercase commands, while uppercase variants use uppercase commands.

## 9. Summation and Product

The `\sum` command represents summation.

```latex
\[
\sum_{i=1}^{n} i
\]
```

The `\prod` command represents a product.

```latex
\[
\prod_{i=1}^{n} i
\]
```

## 10. Integrals

The `\int` command represents integration.

Example:

```latex
\[
\int_0^1 x^2 \, dx
\]
```

The `\,` command adds a small space before the differential.

For double and triple integrals:

```latex
\[
\iint f(x,y)\,dx\,dy
\]

\[
\iiint f(x,y,z)\,dx\,dy\,dz
\]
```

## 11. Limits

The `\lim` command is used to represent limits.

Example:

```latex
\[
\lim_{x \to 0} \frac{\sin x}{x} = 1
\]
```

## 12. Aligned Equations

The `align` environment from the `amsmath` package is used to align multiple equations.

Add this package in the preamble:

```latex
\usepackage{amsmath}
```

Example:

```latex
\begin{align}
a+b &= c \\
x+y &= z
\end{align}
```

The `&` symbol specifies the alignment point, and `\\` separates equations.

To suppress equation numbering, use `align*` instead.

## 13. Matrices

The `amsmath` package provides several matrix environments.

### Matrix without Brackets

```latex
\[
\begin{matrix}
1 & 2 \\
3 & 4
\end{matrix}
\]
```

### Matrix with Parentheses

```latex
\[
\begin{pmatrix}
1 & 2 \\
3 & 4
\end{pmatrix}
\]
```

### Matrix with Square Brackets

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

The `&` symbol separates columns, while `\\` separates rows.

## 14. Cases and Piecewise Functions

The `cases` environment is used to write piecewise-defined functions.

Example:

```latex
\[
f(x) =
\begin{cases}
x^2, & x \geq 0 \\
-x, & x < 0
\end{cases}
\]
```

## 15. Equation Numbering and References

The `equation` environment automatically numbers equations.

```latex
\begin{equation}
E = mc^2
\label{eq:energy}
\end{equation}
```

The equation can be referenced using:

```latex
Equation \ref{eq:energy} represents mass-energy equivalence.
```

## 16. Complete Example

```latex
\documentclass{article}

\usepackage{amsmath}

\begin{document}

\section{Mathematical Expressions}

The Pythagorean theorem is:

\[
a^2+b^2=c^2
\]

A fraction:

\[
\frac{x+1}{x-1}
\]

A summation:

\[
\sum_{i=1}^{n} i = \frac{n(n+1)}{2}
\]

An integral:

\[
\int_0^1 x^2\,dx = \frac{1}{3}
\]

A matrix:

\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

\end{document}
```

## 17. Summary

LaTeX provides extensive mathematical typesetting capabilities. Inline and display mathematics, fractions, roots, matrices, integrals, summations, limits, and aligned equations can be written using simple commands and environments.

The `amsmath` package extends these capabilities and is especially useful for academic and scientific documents.

---

**Previous Chapter:** [Text Formatting](./03-text-formatting.md)

**Next Chapter:** [Tables](./05-tables.md)

**Author:** Anuska Yadav