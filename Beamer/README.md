# Beamer — Creating Presentations with LaTeX

## Topics and order
1. Introduction and basic structure
2. Frames and bullet points
3. Columns and blocks
4. Overlays and transitions
5. Short course presentation

Beamer is a LaTeX document class for creating slide-based presentations. A presentation is made of frames; each frame becomes a slide.

## Basic structure
```latex
\documentclass{beamer}
\begin{document}
\begin{frame}{My First Slide}
    Welcome to my presentation.
\end{frame}
\end{document}
```

- `\documentclass{beamer}` selects the Beamer class.
- `frame` defines an individual slide.
- `itemize` creates bullet points.

## Columns
Use `columns` to divide a slide into vertical sections and `column` to define each section:
```latex
\begin{columns}
  \begin{column}{0.48\textwidth}
    Left side
  \end{column}
  \begin{column}{0.48\textwidth}
    Right side
  \end{column}
\end{columns}
```

## Blocks
A block groups content under a heading:
```latex
\begin{block}{Definition}
A block contains related information.
\end{block}
```

## Overlays
Overlays reveal content in stages while presenting a frame. A simple method is `\pause`:
```latex
\begin{itemize}
  \item First point
  \pause
  \item Second point
\end{itemize}
```
The slide is shown in successive stages, revealing the second point after the pause.

Another overlay command is `\only`:
```latex
\only<1>{This appears on overlay 1.}
\only<2>{This appears on overlay 2.}
```

## Transitions
Beamer supports slide transition effects through commands such as:
```latex
\transdissolve
```
Place a transition command inside a frame to request that effect when moving to that slide. Viewer support can vary.

## Learning outcome
This section demonstrates creating a Beamer presentation using frames, bullet points, columns, blocks, overlays, and a transition effect.
