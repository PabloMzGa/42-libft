# LIBFT - Personal C Library

[![42 School](https://img.shields.io/badge/School-42-black?style=flat-square&logo=42)](https://42.fr/)
[![Language: C](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Standard: C99](https://img.shields.io/badge/Standard-C99-lightblue?style=flat-square)](https://en.wikipedia.org/wiki/C99)
[![Norm: 42](https://img.shields.io/badge/Norm-42-green?style=flat-square)](https://github.com/42School/norminette)

A comprehensive C library recreating standard C library functions plus additional utility functions for string manipulation, memory management, linked lists, mathematical operations, and I/O. This library serves as the foundation for most 42 School projects and demonstrates fundamental programming concepts in C.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Function Categories](#function-categories)
- [API Reference](#api-reference)
- [Examples](#examples)
- [Project Structure](#project-structure)
- [Technical Details](#technical-details)
- [Requirements](#requirements)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

Libft is a custom implementation of essential C library functions, enhanced with additional utilities commonly used in systems programming. This library was developed as part of the 42 School curriculum and serves as the foundation for subsequent projects.

The library demonstrates:
- **Memory Management**: Safe allocation, deallocation, and manipulation
- **String Processing**: Comprehensive string manipulation and analysis
- **Data Structures**: Linked list implementation with full functionality
- **Vector Mathematics**: Complete 3D/nD vector operations for graphics and physics
- **Mathematical Operations**: Number conversion and computational utilities
- **I/O Operations**: Enhanced printing and file reading capabilities
- **Error Handling**: Robust error management and cleanup functions

## ✨ Features

### Core C Library Functions
- **String Manipulation**: `ft_strlen`, `ft_strchr`, `ft_strjoin`, `ft_split`, and more
- **Memory Operations**: `ft_memcpy`, `ft_memset`, `ft_calloc`, `ft_bzero`
- **Character Classification**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isprint`
- **Type Conversion**: `ft_atoi`, `ft_atol`, `ft_itoa`

### Enhanced Utilities
- **Advanced String Operations**: `ft_substr`, `ft_strtrim`, `ft_strmapi`
- **Safe Memory Management**: `ft_free`, `ft_realloc`, `ft_errfree`
- **Linked List Library**: Complete implementation with 10+ functions
- **Vector Mathematics**: 11 functions for 3D/nD vector operations (add, subtract, cross product, etc.)
- **Matrix Operations**: 2D array manipulation and analysis
- **I/O Extensions**: `ft_printf`, `get_next_line` for enhanced output and file reading

### Additional Features
- **Memory Safety**: All functions include proper error checking and cleanup
- **Norm Compliant**: Follows strict 42 School coding standards
- **Optimized Performance**: Efficient algorithms and minimal overhead
- **Comprehensive Documentation**: Detailed function descriptions and examples
- **Modular Design**: Clean separation of functionality into logical modules

## 🚀 Installation

### Prerequisites

- **GCC compiler** (with C99 support)
- **Make** build system
- **ar** archiver utility

### Build Instructions

1. **Clone the repository**
   ```bash
   git clone https://github.com/PabloMzGa/libft.git
   cd libft
   ```

2. **Compile the library**
   ```bash
   make
   ```

3. **Clean object files** (optional)
   ```bash
   make clean
   ```

4. **Full clean** (removes library and objects)
   ```bash
   make fclean
   ```

5. **Rebuild everything**
   ```bash
   make re
   ```

## 🎮 Usage

### Basic Integration

1. **Include the library in your project**
   ```c
   #include "libft.h"
   ```

2. **Compile with the library**
   ```bash
   gcc -Wall -Wextra -Werror -I<path_to_libft>/include your_program.c -L<path_to_libft> -lft -lm -o your_program
   ```

   **Example for typical setup:**
   ```bash
   # If libft is in the same directory as your project
   gcc -Wall -Wextra -Werror -Iinclude your_program.c -L. -lft -lm -o your_program

   # If libft is in a subdirectory called 'libft'
   gcc -Wall -Wextra -Werror -Ilibft/include your_program.c -Llibft -lft -lm -o your_program

   # If libft is in a parent directory
   gcc -Wall -Wextra -Werror -I../libft/include your_program.c -L../libft -lft -lm -o your_program
   ```

   **Flag explanations:**
   - **`-I<path>`**: Tells the compiler where to find header files (`libft.h`)
   - **`-L<path>`**: Tells the linker where to find library files (`libft.a`)
   - **`-lft`**: Links with the libft library
   - **`-lm`**: Links with the math library (required for vector functions)

### Example Usage

```c
#include "libft.h"

int main(void)
{
    // String operations
    char *str = ft_strdup("Hello, 42!");
    char **words = ft_split(str, ' ');

    // Memory operations
    void *ptr = ft_calloc(10, sizeof(int));

    // Linked list operations
    t_list *list = ft_lstnew(ft_strdup("First node"));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Second node")));

    // I/O operations
    ft_printf("List size: %d\n", ft_lstsize(list));

    // Cleanup
    ft_lstclear(&list, free);
    ft_matrix_free((void **)words);
    ft_free(&ptr);
    ft_free((void **)&str);

    return (0);
}
```

## 📚 Function Categories

### String Functions (22 functions)
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculate string length |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character from end |
| `ft_strncmp` | Compare strings |
| `ft_strlcpy` | Safe string copy |
| `ft_strlcat` | Safe string concatenation |
| `ft_strdup` | Duplicate string |
| `ft_strndup` | Duplicate string with limit |
| `ft_substr` | Extract substring |
| `ft_strjoin` | Join two strings |
| `ft_strtrim` | Trim whitespace |
| `ft_split` | Split string by delimiter |
| `ft_strmapi` | Apply function to each character |
| `ft_striteri` | Iterate with index |
| `ft_strnstr` | Locate substring |

### Memory Functions (8 functions)
| Function | Description |
|----------|-------------|
| `ft_memset` | Fill memory with byte |
| `ft_bzero` | Zero out memory |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Move memory area |
| `ft_memchr` | Locate byte in memory |
| `ft_memcmp` | Compare memory areas |
| `ft_calloc` | Allocate and zero memory |
| `ft_memjoin` | Join two memory blocks |

### Character Functions (5 functions)
| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if alphabetic |
| `ft_isdigit` | Check if digit |
| `ft_isalnum` | Check if alphanumeric |
| `ft_isascii` | Check if ASCII |
| `ft_isprint` | Check if printable |
| `ft_isspace` | Check if whitespace |
| `ft_tolower` | Convert to lowercase |
| `ft_toupper` | Convert to uppercase |

### Conversion Functions (4 functions)
| Function | Description |
|----------|-------------|
| `ft_atoi` | String to integer |
| `ft_atol` | String to long |
| `ft_itoa` | Integer to string |
| `ft_uitoa` | Unsigned integer to string |

### Linked List Functions (10 functions)
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new node |
| `ft_lstadd_front` | Add node to front |
| `ft_lstadd_back` | Add node to back |
| `ft_lstsize` | Count list nodes |
| `ft_lstlast` | Get last node |
| `ft_lstdelone` | Delete single node |
| `ft_lstclear` | Delete entire list |
| `ft_lstiter` | Iterate through list |
| `ft_lstmap` | Map function to list |
| `ft_lstindex` | Get node by index |

### I/O Functions (6 functions)
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Output character to fd |
| `ft_putstr_fd` | Output string to fd |
| `ft_putendl_fd` | Output string + newline to fd |
| `ft_putnbr_fd` | Output number to fd |
| `ft_printf` | Formatted output (custom implementation) |
| `ft_get_next_line` | Read line from file descriptor |

### Utility Functions (15+ functions)
| Function | Description |
|----------|-------------|
| `ft_free` | Safe pointer deallocation |
| `ft_realloc` | Reallocate memory |
| `ft_errfree` | Error handling with cleanup |
| `ft_matrix_free` | Free 2D array |
| `ft_matrix_len` | Get matrix length |
| `ft_getenv` | Get environment variable |
| `ft_min*` | Minimum value functions |

### Vector Math Functions (11 functions)
| Function | Description |
|----------|-------------|
| `ft_vect_add` | Add two vectors element-wise |
| `ft_vect_sub` | Subtract two vectors element-wise |
| `ft_vect_prod` | Multiply vector by scalar |
| `ft_vect_div` | Divide vector by scalar |
| `ft_vect_dot` | Calculate dot product of vectors |
| `ft_vect_cross` | Calculate cross product of vectors |
| `ft_vect_magn` | Calculate vector magnitude |
| `ft_vect_norm` | Normalize vector to unit length |
| `ft_vect_abs` | Get absolute values of vector components |
| `ft_vect_rotz3d` | Rotate 3D vector around Z-axis |
| `ft_vect_ortproj` | Orthogonal projection of point onto plane |

## 📁 Project Structure

```
libft/
├── include/
│   ├── libft.h                    # Main header file
│   ├── ft_get_next_line/
│   │   └── ft_get_next_line.h     # GNL specific header
│   └── ft_printf/
│       └── ft_printf.h            # Printf specific header
├── src/
│   ├── ft_*.c                     # Core library functions
│   ├── ft_printf/
│   │   ├── ft_printf.c            # Main printf implementation
│   │   ├── check_printer.c        # Format specifier handling
│   │   └── printers/              # Individual format handlers
│   │       ├── c_printer.c        # Character printer
│   │       ├── s_printer.c        # String printer
│   │       ├── di_printer.c       # Integer printer
│   │       ├── u_printer.c        # Unsigned printer
│   │       ├── x_low_printer.c    # Hex lowercase
│   │       ├── x_up_printer.c     # Hex uppercase
│   │       ├── p_printer.c        # Pointer printer
│   │       └── prct_printer.c     # Percent printer
├── Makefile                       # Build configuration
└── README.md                      # This file
```

## 🔧 Technical Details

### Compilation

The library is compiled using:
```bash
gcc -Wall -Wextra -Werror -std=c99
```

**Important**: When using the library in your projects, you need to specify paths for headers and libraries:
```bash
gcc -Wall -Wextra -Werror -I<libft_include_path> your_program.c -L<libft_library_path> -lft -lm -o your_program
```

**Complete compilation flags explanation:**
- **`-I<path>`**: Include path for header files (where `libft.h` is located)
- **`-L<path>`**: Library path for `.a` files (where `libft.a` is located)
- **`-lft`**: Link with libft library
- **`-lm`**: Link with math library (required for vector math functions)

### Dependencies

- **Standard C Library**: Core functionality
- **Math Library (libm)**: Required for vector math functions that use `sqrt()`, trigonometric functions, etc.
- **No external dependencies**: All other functionality is self-contained

### Memory Management Philosophy

- **Always check malloc return values**
- **Free all allocated memory**
- **Set pointers to NULL after freeing**
- **Use `ft_free` for safe deallocation**
- **Implement proper cleanup in error cases**

### Error Handling Strategy

```c
// Example of robust error handling
char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s1 && s2)
        return (ft_strdup(s2));
    else if (s1 && !s2)
        return (ft_strdup(s1));
    else if (!s1 && !s2)
        return (NULL);

    // Continue with normal execution...
}
```

### Performance Considerations

- **Efficient algorithms**: O(n) complexity for most operations
- **Minimal memory footprint**: Optimized data structures
- **Cache-friendly**: Sequential memory access patterns
- **Branch prediction**: Optimized conditional logic

### 42 Norm Compliance

This library strictly follows the 42 School Norm:

- ✅ Maximum 25 lines per function
- ✅ Maximum 80 columns per line
- ✅ Maximum 5 functions per file
- ✅ No global variables
- ✅ Comprehensive error handling
- ✅ Proper function and variable naming
- ✅ Detailed header documentation

## 📋 Requirements

### System Requirements
- **OS**: Unix-like system (Linux, macOS)
- **Compiler**: GCC 4.8+ or Clang 3.5+
- **Make**: GNU Make 3.81+
- **Archiver**: ar utility

### Standards Compliance
- **C Standard**: C99 (ISO/IEC 9899:1999)
- **POSIX**: Compatible with POSIX.1-2008
- **Memory**: No memory leaks (verified with Valgrind)
- **Security**: Buffer overflow protection

## 🏗️ Build System

### Makefile Targets

```bash
make           # Compile the library (creates libft.a)
make clean     # Remove object files
make fclean    # Remove library and object files
make re        # Rebuild everything from scratch
```

### Compilation Flags

- **`-Wall`**: Enable all common warnings
- **`-Wextra`**: Enable extra warnings
- **`-Werror`**: Treat warnings as errors
- **`-std=c99`**: Use C99 standard

### Library Creation

The build process creates a static library (`libft.a`) using the `ar` archiver:

```bash
ar rcs libft.a *.o
```

## 💡 Examples

### Basic String Manipulation

```c
#include "libft.h"

int main(void)
{
    char *original = "  Hello, World!  ";
    char *trimmed = ft_strtrim(original, " ");
    char **words = ft_split(trimmed, ',');

    ft_printf("Original: '%s'\n", original);
    ft_printf("Trimmed: '%s'\n", trimmed);
    ft_printf("First word: '%s'\n", words[0]);

    // Cleanup
    ft_free((void **)&trimmed);
    ft_matrix_free((void **)words);

    return (0);
}
```

### Linked List Usage

```c
#include "libft.h"

void print_list_content(void *content)
{
    ft_printf("%s -> ", (char *)content);
}

int main(void)
{
    t_list *list = NULL;

    // Build list
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("First")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Second")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Third")));

    // Print list
    ft_lstiter(list, print_list_content);
    ft_printf("NULL\n");

    // Cleanup
    ft_lstclear(&list, free);

    return (0);
}
```

### File Reading with GNL

```c
#include "libft.h"

int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2)
        return (1);

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
        return (1);

    while ((line = ft_get_next_line(fd)) != NULL)
    {
        ft_printf("%s", line);
        ft_free((void **)&line);
    }

    close(fd);
    return (0);
}
```

### Vector Mathematics

```c
#include "libft.h"

int main(void)
{
    // Create 3D vectors
    double v1[3] = {1.0, 2.0, 3.0};
    double v2[3] = {4.0, 5.0, 6.0};
    double *result;

    // Vector addition
    result = ft_vect_add(v1, v2, 3);
    ft_printf("Addition: [%.1f, %.1f, %.1f]\n", result[0], result[1], result[2]);
    free(result);

    // Vector cross product
    result = ft_vect_cross(v1, v2, 3);
    ft_printf("Cross product: [%.1f, %.1f, %.1f]\n", result[0], result[1], result[2]);
    free(result);

    // Vector magnitude
    double magnitude = ft_vect_magn(v1, 3);
    ft_printf("Magnitude of v1: %.2f\n", magnitude);

    // Normalize vector
    result = ft_vect_norm(v1, 3);
    ft_printf("Normalized v1: [%.3f, %.3f, %.3f]\n", result[0], result[1], result[2]);
    free(result);

    return (0);
}
```

**Compilation for this example:**
```bash
# If libft is in the same directory
gcc -Wall -Wextra -Werror -Iinclude vector_example.c -L. -lft -lm -o vector_example

# If libft is in a subdirectory
gcc -Wall -Wextra -Werror -Ilibft/include vector_example.c -Llibft -lft -lm -o vector_example
```
*Note: `-I` specifies header location, `-L` specifies library location, `-lm` is required for mathematical functions.*

## 🤝 Contributing

This library is part of the 42 School curriculum and is primarily for educational purposes. However, improvements and bug fixes are welcome!

### Development Guidelines

1. **Follow 42 Norm**: All code must comply with 42 School standards
2. **Test thoroughly**: Ensure no memory leaks or undefined behavior
3. **Document changes**: Update headers and README accordingly
4. **Maintain compatibility**: Don't break existing function signatures
5. **Add tests**: Include test cases for new functionality

### Reporting Issues

When reporting bugs, please include:
- **Function name** and expected behavior
- **Input values** that cause the issue
- **Expected vs actual output**
- **System information** (OS, compiler version)

## 📜 License

This project is part of the 42 School curriculum. The code is available for educational purposes and portfolio demonstration.

---

### 👨‍💻 Author

**Pablo Martín García**
- GitHub: [@PabloMzGa](https://github.com/PabloMzGa)
- 42 Intra: `pabmart2`
- School: 42 Málaga
