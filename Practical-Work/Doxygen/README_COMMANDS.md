# Doxygen Commands and Tags

Run commands from `Practical-Work/Doxygen`.

## Installation checks
```bash
doxygen --version
dot -V
```

## Configuration and generation
```bash
doxygen -g Doxyfile       # create a default configuration (only if none exists)
doxygen Doxyfile          # generate documentation using this configuration
doxygen -u Doxyfile       # update an existing configuration file
open generated/html/index.html
```

## Useful documentation commands

| Tag | Purpose |
|---|---|
| `@file` | Documents a source file |
| `@brief` | Short description |
| `@details` | Detailed description |
| `@param` | Describes a parameter |
| `@return` | Describes a return value |
| `@class` | Documents a class |
| `@author` | Author information |
| `@date` | Date |
| `@see` | Cross-reference |
| `@code` / `@endcode` | Code example |
| `@note` | Note |
| `@warning` | Warning |
| `@todo` | Pending work |
| `@defgroup` | Defines a documentation group |
| `@{` / `@}` | Opens/closes a group |

`@` and `\\` are interchangeable prefixes in Doxygen. For example, `@brief` and `\\brief` have the same meaning.
