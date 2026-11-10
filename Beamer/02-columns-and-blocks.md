# 2. Columns and Blocks

## Columns
The `columns` environment divides a frame into vertical sections. Each section uses `column`.
```latex
\begin{columns}
  \begin{column}{0.48\textwidth}
    Left column
  \end{column}
  \begin{column}{0.48\textwidth}
    Right column
  \end{column}
\end{columns}
```

## Blocks
A block groups related content under a title:
```latex
\begin{block}{Definition}
  A block contains related information.
\end{block}
```

See `../02_Columns_and_Blocks.tex`.
