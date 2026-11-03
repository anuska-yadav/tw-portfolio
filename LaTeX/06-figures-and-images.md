# 06. Figures and Images in LaTeX

## 1. Introduction

Images and figures are important elements of technical documents. They help explain concepts, present visual information, and improve document readability.

LaTeX provides the `graphicx` package to insert and customize images.

## 2. Required Package

To include images, add the following command in the preamble:

```latex
\usepackage{graphicx}
```

This package provides the `\includegraphics` command.

## 3. Inserting an Image

The `\includegraphics` command inserts an image into a document.

Syntax:

```latex
\includegraphics{filename}
```

Example:

```latex
\documentclass{article}
\usepackage{graphicx}

\begin{document}

\includegraphics{image.png}

\end{document}
```

The image file must be available in the project directory or at the specified path.

## 4. Resizing Images

The `\includegraphics` command supports several options for controlling image size.

### 4.1 Width

```latex
\includegraphics[width=5cm]{image.png}
```

### 4.2 Height

```latex
\includegraphics[height=4cm]{image.png}
```

### 4.3 Scaling

```latex
\includegraphics[scale=0.5]{image.png}
```

### 4.4 Maintaining Aspect Ratio

The `keepaspectratio` option prevents an image from being distorted when both width and height are specified.

```latex
\includegraphics[
    width=5cm,
    height=4cm,
    keepaspectratio
]{image.png}
```

## 5. Figure Environment

The `figure` environment is used to create a floating figure with a caption and label.

Example:

```latex
\begin{figure}[htbp]
\centering
\includegraphics[width=0.5\textwidth]{image.png}
\caption{Example Image}
\label{fig:example}
\end{figure}
```

### Explanation

- `\begin{figure}` starts the figure environment.
- `[htbp]` suggests possible figure placement.
- `\centering` centers the image.
- `\includegraphics` inserts the image.
- `\caption` adds a caption.
- `\label` assigns a reference identifier.

LaTeX may move floating figures to achieve a better page layout.

## 6. Image Positioning

Common placement options include:

| Option | Meaning |
|---|---|
| `h` | Approximately here |
| `t` | Top of the page |
| `b` | Bottom of the page |
| `p` | Separate page for floats |
| `!` | Relaxes some placement restrictions |

Example:

```latex
\begin{figure}[htbp]
```

These options indicate placement preferences rather than guaranteed positions.

## 7. Referencing Figures

The `\label` command assigns an identifier to a figure, while `\ref` retrieves its number.

Example:

```latex
Figure \ref{fig:example} illustrates the concept.
```

Place the `\label` command after `\caption` so that the reference uses the correct figure number.

## 8. Rotating Images

The `angle` option rotates an image.

Example:

```latex
\includegraphics[angle=90,width=5cm]{image.png}
```

The image is rotated by 90 degrees.

## 9. Cropping Images

The `trim` and `clip` options can be used to crop an image.

Example:

```latex
\includegraphics[
    width=5cm,
    trim=1cm 1cm 1cm 1cm,
    clip
]{image.png}
```

The trim values represent the amounts removed from the left, bottom, right, and top, respectively.

## 10. Supported Image Formats

Common image formats include:

| Format | Description |
|---|---|
| PNG | Suitable for diagrams and graphics |
| JPG/JPEG | Commonly used for photographs |
| PDF | Useful for vector graphics |
| EPS | Used in some traditional LaTeX workflows |

Supported formats depend on the compiler. For example, PDFLaTeX commonly supports PNG, JPEG, and PDF images.

## 11. Subfigures

The `subcaption` package allows multiple related images to be placed within one figure.

Add:

```latex
\usepackage{subcaption}
```

Example:

```latex
\begin{figure}[htbp]
\centering

\begin{subfigure}{0.45\textwidth}
    \centering
    \includegraphics[width=\linewidth]{image1.png}
    \caption{First Image}
\end{subfigure}
\hfill
\begin{subfigure}{0.45\textwidth}
    \centering
    \includegraphics[width=\linewidth]{image2.png}
    \caption{Second Image}
\end{subfigure}

\caption{Comparison of Two Images}
\label{fig:comparison}
\end{figure}
```

Each subfigure has its own caption, while the entire group has a main caption.

## 12. Complete Example

```latex
\documentclass{article}

\usepackage{graphicx}

\begin{document}

\section{Figures in LaTeX}

The following figure demonstrates image insertion.

\begin{figure}[htbp]
\centering
\includegraphics[
    width=0.6\textwidth
]{image.png}

\caption{Sample Figure}
\label{fig:sample}
\end{figure}

Figure \ref{fig:sample} shows an example of an inserted image.

\end{document}
```

Make sure that `image.png` exists in the project directory before compiling.

## 13. Summary

LaTeX provides the `graphicx` package for inserting, resizing, rotating, and cropping images. The `figure` environment supports captions, labels, positioning, and references.

The `subcaption` package is useful for presenting multiple related images together.

---

**Previous Chapter:** [Tables](./05-tables.md)

**Next Chapter:** [Colours and Formatting](./07-colours-and-formatting.md)

**Author:** Anuska Yadav