# Libft

> A custom C library — Reimplementation of standard libc functions and additional utilities

<div align="center">

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![42](https://img.shields.io/badge/42-000000?style=for-the-badge&logo=42&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-success?style=for-the-badge)
![Grade](https://img.shields.io/badge/Grade-125%2F100-brightgreen?style=for-the-badge)

</div>

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Implemented Functions](#implemented-functions)
- [Compilation](#compilation)
- [Testing](#testing)
- [Examples](#examples)
- [Project Structure](#project-structure)
- [Author](#author)

---

## About

**Libft** is the first project in the 42 School curriculum. It consists of recoding a set of functions from the C standard library (`libc`) as well as additional utility functions that will be reused throughout the curriculum.

### Learning Objectives

- Understand the internal workings of standard C functions
- Master memory management (allocation, deallocation)
- Learn to create and manage linked lists
- Manipulate pointers and memory safely
- Comply with 42's strict coding standard (Norminette)

### Key Features

- 100% Norminette compliant
- No memory leaks (tested with Valgrind)
- Bonus part completed (linked list management)
- Optimized Makefile with relink prevention
- Documented and commented code

---

## Features

### Mandatory Part

| Category | Function Count | Description |
|----------|----------------|-------------|
| **Character Tests** | 7 | `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `tolower`, `toupper` |
| **String Manipulation** | 9 | `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`, `strdup` |
| **Memory Management** | 7 | `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc` |
| **Conversions** | 2 | `atoi`, `itoa` |
| **Utility Functions** | 11 | `substr`, `strjoin`, `strtrim`, `split`, `strmapi`, `striteri`, `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd` |

**Total: 36 functions**

### Bonus Part

| Category | Function Count | Description |
|----------|----------------|-------------|
| **Linked Lists** | 9 | `lstnew`, `lstadd_front`, `lstadd_back`, `lstsize`, `lstlast`, `lstdelone`, `lstclear`, `lstiter`, `lstmap` |

**Total: 9 bonus functions**

---

## Installation

### Prerequisites

| Tool | Minimum Version | Purpose |
|------|-----------------|---------|
| gcc | 9.0+ | Compilation |
| make | 4.3+ | Build automation |

### Clone the Repository

```bash
git clone https://github.com/dbouizem/libft.git
cd libft
```

### Compile the Library

```bash
# Mandatory part
make

# With bonus functions
make bonus

# Cleanup
make clean      # Remove .o files
make fclean     # Remove .o files and libft.a
make re         # Recompile everything
```

The compilation generates **libft.a** (static library).

---

## Usage

### Including libft in Your Project

**Step 1: Add the Header**

```c
#include "libft.h"
```

**Step 2: Compile with the Library**

```bash
# Method 1: Link the library at compilation
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program

# Method 2: Include the .a directly
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

**Parameters:**
- `-L.` : Search for libraries in the current directory
- `-lft` : Link with libft (searches for libft.a)

---

## Implemented Functions

### Character Tests

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_isalpha` | `int ft_isalpha(int c);` | Checks if `c` is an alphabetic letter |
| `ft_isdigit` | `int ft_isdigit(int c);` | Checks if `c` is a digit (0-9) |
| `ft_isalnum` | `int ft_isalnum(int c);` | Checks if `c` is alphanumeric |
| `ft_isascii` | `int ft_isascii(int c);` | Checks if `c` is an ASCII character (0-127) |
| `ft_isprint` | `int ft_isprint(int c);` | Checks if `c` is printable |
| `ft_tolower` | `int ft_tolower(int c);` | Converts `c` to lowercase |
| `ft_toupper` | `int ft_toupper(int c);` | Converts `c` to uppercase |

### String Manipulation

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_strlen` | `size_t ft_strlen(const char *s);` | Returns the length of `s` |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size);` | Copies `src` to `dst` (max `size-1` characters) |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size);` | Concatenates `src` to `dst` (max `size` total) |
| `ft_strchr` | `char *ft_strchr(const char *s, int c);` | Finds first occurrence of `c` in `s` |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c);` | Finds last occurrence of `c` in `s` |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len);` | Finds `little` in `big` (max `len` bytes) |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n);` | Compares `s1` and `s2` (max `n` characters) |
| `ft_strdup` | `char *ft_strdup(const char *s);` | Duplicates string `s` |

### Memory Management

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n);` | Fills `n` bytes of `s` with `c` |
| `ft_bzero` | `void ft_bzero(void *s, size_t n);` | Sets `n` bytes of `s` to zero |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n);` | Copies `n` bytes from `src` to `dst` |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t n);` | Copies `n` bytes (handles overlap) |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n);` | Finds `c` in first `n` bytes of `s` |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | Compares `n` bytes of `s1` and `s2` |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size);` | Allocates and initializes to zero |

### Conversions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_atoi` | `int ft_atoi(const char *nptr);` | Converts string to integer |
| `ft_itoa` | `char *ft_itoa(int n);` | Converts integer to string |

### Utility Functions

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Extracts substring |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Concatenates `s1` and `s2` |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Removes `set` from start/end of `s1` |
| `ft_split` | `char **ft_split(char const *s, char c);` | Splits `s` by delimiter `c` |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies `f` to each character |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies `f` in-place with index |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Writes `c` to fd |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd);` | Writes `s` to fd |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Writes `s` + `\n` to fd |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd);` | Writes integer `n` to fd |

### Bonus — Linked Lists

**Structure:**

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Creates new element |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds `new` at the beginning |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds `new` at the end |
| `ft_lstsize` | `int ft_lstsize(t_list *lst);` | Counts number of elements |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Returns last element |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void*));` | Deletes one element |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void*));` | Deletes entire list |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Applies `f` to each element |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates new list by applying `f` |

---

## Compilation

### Makefile

The Makefile contains the following rules:

```bash
make          # Compiles libft.a
make bonus    # Compiles with bonus functions
make clean    # Removes .o files
make fclean   # Removes .o and libft.a
make re       # fclean + make
```

### Compilation Flags

```makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror
```

### Relink Prevention

The Makefile is optimized to avoid unnecessary relinking. If no source files have changed, `make` will not recompile.

---

## Testing

### Unit Tests

I recommend using an external tester to verify all functions:

**Popular Testers:**

- [libft-unit-test](https://github.com/alelievr/libft-unit-test) — Comprehensive tester with integrated Makefile
- [libftTester](https://github.com/Tripouille/libftTester) — Simple and fast
- [francinette](https://github.com/xicodomingues/francinette) — Official 42 tester

**Example with libft-unit-test:**

```bash
git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test
make f
```

### Valgrind Tests

```bash
# Compile with debug symbols
gcc -g your_test.c libft.a -o test

# Check for memory leaks
valgrind --leak-check=full --show-leak-kinds=all ./test
```

### Manual Tests

Create a simple test file:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Test ft_strlen
    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
    
    // Test ft_strdup
    char *dup = ft_strdup("Test");
    printf("ft_strdup(\"Test\"): %s\n", dup);
    free(dup);
    
    // Test ft_split
    char **split = ft_split("Hello,World,42", ',');
    for (int i = 0; split[i]; i++)
    {
        printf("split[%d]: %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);
    
    return 0;
}
```

Compile and run:

```bash
gcc test.c libft.a -o test
./test
```

---

## Examples

### Example 1: Using ft_split

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    **result;
    int     i;

    result = ft_split("Hello world from 42", ' ');
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}
```

**Output:**
```
Hello
world
from
42
```

### Example 2: Using Linked Lists

```c
#include "libft.h"
#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list  *list;
    t_list  *elem1;
    t_list  *elem2;
    
    elem1 = ft_lstnew("First element");
    elem2 = ft_lstnew("Second element");
    
    list = elem1;
    ft_lstadd_back(&list, elem2);
    
    ft_lstiter(list, print_content);
    
    ft_lstclear(&list, free);
    return (0);
}
```

**Output:**
```
First element
Second element
```

### Example 3: Memory Management with ft_calloc

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int *array;
    int i;

    array = (int *)ft_calloc(5, sizeof(int));
    if (!array)
        return (1);
    
    // All elements are initialized to 0
    i = 0;
    while (i < 5)
    {
        printf("array[%d] = %d\n", i, array[i]);
        i++;
    }
    
    free(array);
    return (0);
}
```

**Output:**
```
array[0] = 0
array[1] = 0
array[2] = 0
array[3] = 0
array[4] = 0
```

---

## Project Structure

```
libft/
│
├── includes/
│   └── libft.h              # Main header
│
├── srcs/
│   ├── ft_isalpha.c
│   ├── ft_isdigit.c
│   ├── ft_strlen.c
│   ├── ft_memset.c
│   ├── ft_split.c
│   ├── ft_itoa.c
│   └── ...                  # All functions
│
├── srcs_bonus/
│   ├── ft_lstnew.c
│   ├── ft_lstadd_front.c
│   └── ...                  # Bonus functions
│
├── Makefile                 # Compilation
├── README.md                # This file
└── .gitignore               # Ignored files
```

---

## Author

<div align="center">

| [<img src="https://github.com/dbouizem.png" width="100px;"/><br /><sub><b>dbouizem</b></sub>](https://github.com/dbouizem)<br /> |
| :---: |

[![GitHub](https://img.shields.io/badge/GitHub-dbouizem-181717?style=for-the-badge&logo=github)](https://github.com/dbouizem)

</div>

---

## License

This project was completed as part of the 42 School curriculum. It is freely available for educational purposes.

---

<div align="center">

**If this project helped you, feel free to give it a star!**

*Made at 42 Paris*

</div>
