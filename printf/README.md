*This activity has been created as part of the 42 curriculum by mahal-zo.*

## Description
`ft_printf` is a custom implementation of the classic C library function `printf()`. The primary goal of this project is to discover and master variadic functions in C while building a well-structured, modular, and extensible library. 

The resulting archive, `libftprintf.a`, mimics the original formatting behavior and supports the following conversion specifiers:
* **%c**: Prints a single character.
* **%s**: Prints a string.
* **%p**: Prints a void pointer in hexadecimal format.
* **%d**: Prints a decimal (base 10) number.
* **%i**: Prints an integer in base 10.
* **%u**: Prints an unsigned decimal (base 10) number.
* **%x**: Prints a number in hexadecimal (base 16) lowercase format.
* **%X**: Prints a number in hexadecimal (base 16) uppercase format.
* **%%**: Prints a percent sign.

---

## Instructions

### Compilation
To compile the library, navigate to the root of the repository and use the provided `Makefile`:

```bash
make
```

The Makefile supports the standard 42 rules:
* `make`: Compiles source files and creates `libftprintf.a` using `cc` with `-Wall`, `-Wextra`, and `-Werror`.
* `clean`: Removes all temporary object files.
* `fclean`: Removes object files as well as the compiled `libftprintf.a` library.
* `re`: Forces a complete recompilation of the project.

---

## Algorithm and Data Structure
The core architecture of `ft_printf` relies on iterative string parsing and variadic argument handling:
* **Format Parsing**: The main function iterates through the format string. Ordinary characters are written directly to standard output, while characters following a `%` symbol trigger the formatting pipeline.
* **Variadic Argument Management**: Using the `<stdarg.h>` macro library (`va_start`, `va_arg`, `va_copy`, `va_end`), arguments are dynamically fetched matching their respective type specifiers.
* **Modular Formatting Helpers**: Each conversion specifier is handled by a specialized helper function (e.g., base conversion algorithms for hexadecimal output and recursive decimal printing), ensuring code maintainability and adherence to the 42 Norm.

---

## Resources & AI Usage

### Resources
* `man printf` and standard C library documentation
* Guide to variadic functions in C (`<stdarg.h>`)

### AI Usage
* **Tasks**: AI tools were consulted to understand the theoretical mechanics of variadic argument lists and structure efficient parsing logic.
* **Scope**: No direct code was copied or generated automatically. All implementation, debugging, and norm-compliance checks were performed independently to respect 42's educational philosophy.