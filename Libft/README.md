*This activity has been created as part of the 42 curriculum by mahal-zo.*

# Libft - Your Very First C Library

## Description

**Libft** is the very first project in the 42 curriculum. The goal is to design and build a custom C library (`libft.a`) containing a collection of general-purpose functions that will serve as a foundational toolkit for future C school assignments.

The library is divided into three main parts:

1. **Libc Functions:** Reimplementations of standard C library functions prefixed with `ft_` (e.g., `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_strlcpy`, etc.).

2. **Additional Functions:** Non-standard or modified utility functions designed to make string and memory manipulation easier (e.g., `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, and various file descriptor output functions).

3. **Linked List Functions:** Utility functions for creating and managing singly linked lists using a custom `t_list` structure (e.g., `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`).

## Instructions

### Compilation

The project comes with a `Makefile` that compiles the source files with `-Wall -Wextra -Werror` flags using `cc`. To compile the library and generate the `libft.a` archive, run:

```
make

```

Available `Makefile` rules include:

* `make`: Compiles the library objects and generates `libft.a`.

* `make clean`: Removes all object files.

* `make fclean`: Removes all object files and the `libft.a` library archive.

* `make re`: Performs a full re-compilation (`fclean` followed by `make`).

### Execution / Usage

To use `libft` in your own C projects, include the header file in your source code:

```
#include "libft.h"

```

Then compile your program by linking the library archive:

```
cc -Wall -Wextra -Werror main.c libft.a

```

## Technical Choices

* **Static Helper Functions:** Complex functions were broken down into modular helper functions declared as `static` to restrict their scope to their respective files and prevent namespace pollution.

* **Memory Management:** All heap-allocated memory blocks (`malloc`, `strdup`, `calloc`) are rigorously tracked and freed where appropriate to ensure zero memory leaks.

## Resources

* [C Standard Library Documentation (man pages)](https://man7.org/linux/man-pages/man3/exit.3.html?utm_source=gemini)

* [GNU C Library (glibc) Manual](https://www.gnu.org/software/libc/manual/?utm_source=gemini)

### Use of AI

* **Concept Understanding & Brainstorming:** AI was consulted to clarify pointer arithmetic concepts, memory allocation edge cases (such as behavior when handling zero-size allocations in `calloc`), and understanding the mechanics of function pointers used in `ft_strmapi` and `ft_lstmap`.

* **Debugging Guidance:** AI was used as a sounding board to interpret stubborn segmentation faults and verify logic flow during the development of complex list-manipulation functions like `ft_split` and `ft_lstmap`. No direct code blocks were copied; all implementation and logic were written independently.
