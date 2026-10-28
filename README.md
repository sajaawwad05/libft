*This project has been created as part of the 42 curriculum by saawwad.*

# Libft

## Description

**Libft** is the first project of the 42 common core. The goal is to build your own C library (`libft.a`) that re-implements a set of standard C library functions, plus a number of additional utility functions. This library is meant to be reused in all later 42 projects, so it doubles as a personal toolbox.

The project teaches:

- How standard library functions really work (memory handling, string manipulation, character checks, conversions).
- Writing clean, norm-compliant C code (the 42 Norm).
- Dynamic memory allocation and avoiding leaks.
- Building a static library with a `Makefile`.
- Implementing and manipulating singly linked lists.

### Library overview

The library is split into three parts.

#### Part 1 - Libc functions

Re-implementations of standard functions, with the same prototypes and behavior as the originals (prefixed with `ft_`).

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

#### Part 2 - Additional functions

Functions that are not in libc, or that are part of it in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string, allocated with `malloc`. |
| `ft_strjoin` | Concatenates two strings into a new allocated string. |
| `ft_strtrim` | Trims a set of characters from the start and end of a string. |
| `ft_split` | Splits a string using a delimiter character into a `NULL`-terminated array of strings. |
| `ft_itoa` | Converts an integer to an allocated string. |
| `ft_strmapi` | Applies a function to each character (with its index) and returns a new string. |
| `ft_striteri` | Applies a function to each character (with its index) in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

#### Part 3 - linked lists

This part adds functions to manipulate lists built from this structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a single node's content using a given function, then the node. |
| `ft_lstclear` | Deletes and frees a node and all of its successors. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content, cleaning up on failure. |

## Instructions

### Requirements

- A C compiler (`cc`, `gcc` or `clang`)
- `make`
- `ar` (to create the static library)

### Compilation

The library is compiled with the flags `-Wall -Wextra -Werror`.

```bash
# Build libft.a
make

# Remove object files
make clean

# Remove object files and libft.a
make fclean

# Rebuild everything from scratch
make re
```

### Usage in your own project

1. Include the header in your source files:

   ```c
   #include "libft.h"
   ```

2. Compile your program and link it against the library:

   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

### Example

```c
#include "libft.h"

int main(void)
{
    char    **words;
    int     i;

    words = ft_split("hello 42 world", ' ');
    i = 0;
    while (words && words[i])
    {
        ft_putendl_fd(words[i], 1);
        free(words[i]);
        i++;
    }
    free(words);
    return (0);
}
```

Output:

```
hello
42
world
```

## Resources

### References

- [C Programming Language (Youtube Playlist)](https://www.youtube.com/watch?v=gq_ZXCuRhU4&list=PLA1FTfKBAEX4hblYoH6mnq0zsie2w6Wif)
- [Makefile](https://www.youtube.com/live/GExnnTaBELk?si=yiixIAYwGOwdIMY-c)
- [Linux Man Page](https://linux.die.net/man/)
- [42 Norm](https://github.com/42School/norminette)

### Use of AI

AI was used as a learning and support tool only.

- - **Understanding concepts:** explanations of how functions such as `memmove` (overlapping memory) and `strlcpy`/`strlcat` behave, the commands used in the Makefile, the logic behind `ft_split` (counting words, allocating each substring, freeing on failure), and linked list manipulation.
- **Testing:** ideas for edge cases to test the functions (empty strings, `NULL` arguments, overflow cases).
- **Documentation:** help structuring and wording this `README.md`.

All the code of the library was written, understood and tested by the project author.
