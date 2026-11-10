# 3. Overlays and Transitions

## Overlays
Overlays reveal frame content step by step.

### Using `\pause`
```latex
\begin{itemize}
  \item First point
  \pause
  \item Second point
\end{itemize}
```

### Using `\only`
```latex
\only<1>{Shown on overlay 1}
\only<2>{Shown on overlay 2}
```

## Transitions
A transition command such as `\transdissolve` can be placed inside a frame:
```latex
\begin{frame}{Transition Example}
  \transdissolve
  This slide requests a dissolve transition.
\end{frame}
```
The effect depends on the PDF viewer.

See `../03_Overlays_and_Transitions.tex`.
