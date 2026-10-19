*This activity has been created as part of the 42 curriculum by mahal-zo.*

## Description

**get_next_line** is a foundational coding project at 42. The primary goal of this activity is to program a function that returns a single line read from a file descriptor. 

Key features and specifications of the project include:
- Repeated calls to `get_next_line()` allow reading from a file descriptor (whether it is a text file, standard input, or another valid descriptor) line by line.
- The returned line includes the terminating newline character (`\n`), unless the end of the file is reached without one.
- The function relies on the strategic use of **static variables** to remember remaining characters between function calls, avoiding reading the entire file at once.
- Supports compilation with a customizable buffer size via the `-D BUFFER_SIZE=n` flag.

---

## Instructions

### Files to Submit
- `get_next_line.c`
- `get_next_line_utils.c`
- `get_next_line.h`

### Compilation
The project must be compiled using `cc` with the standard flags (`-Wall`, `-Wextra`, `-Werror`), along with the buffer size macro flag:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c <optional_main_file.c>
```

---

## Algorithm Explanation and Technical Choices

The core challenge of `get_next_line` is handling data streams that do not neatly align with line boundaries or buffer sizes. The chosen algorithm follows these key steps:

1. **Reading & Accumulating (`read` loop):** 
   Using a static buffer (or a static pointer acting as a remainder storage), the function continuously reads chunks of size `BUFFER_SIZE` from the file descriptor into a temporary buffer until a newline character (`\n`) is found or the end-of-file (EOF) is reached.
2. **Line Extraction:** 
   Once a newline or EOF is encountered, the accumulated string is parsed up to the newline. This extracted portion is allocated, populated, and returned.
3. **Remainder Preservation:** 
   Any leftover bytes read past the newline are securely stored in the static variable so they are not lost for subsequent calls to `get_next_line()`.
4. **Memory Management:** 
   Proper buffer joining and freeing steps are implemented at every stage to ensure zero memory leaks and prevent segmentation faults on empty files, read errors, or very large/small buffer sizes (e.g., `BUFFER_SIZE=1` or `9999`).

---

## Resources & AI Usage

### References
- [Man page for read (2)](https://man7.org/linux/man-pages/man2/read.2.html)
- Understanding File Descriptors and Buffered I/O in C programming.

### AI Usage Disclosure
In accordance with 42's AI guidelines, AI tools were utilized strictly as a supplementary learning and conceptualization aid to:
- Understand the mechanics of static variables and how to manage persistent state across function calls.
- Clarify edge cases regarding memory allocation and buffer size flags.
No direct source code was generated or copied using AI; all logic and implementation were developed through personal reasoning and peer collaboration.