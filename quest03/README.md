# Welcome to Quest03
***

## Task
This project is about re-implementing basic C standard library functions and understanding how they work internally.  
The main challenge is working with pointers, loops, strings, and structures (`struct`).  
We also practice algorithmic thinking with operations like sorting checks, string manipulation, and in-place algorithms.

Key challenges:
- Handling strings without using standard library functions
- Working with pointers safely
- Implementing logic for string searching and comparison
- Understanding structs and memory access

---

## Description
In this project, we implemented several fundamental C functions from scratch:

- `reverse_string`: Reverse a string in-place without extra memory
- `my_strcmp`: Compare two strings lexicographically
- `my_strcpy`: Copy a string into another buffer
- `my_strncpy`: Copy n characters from a string
- `my_strchr`: Find first occurrence of a character in a string
- `my_strrchr`: Find last occurrence of a character in a string
- `my_strstr`: Find a substring inside a string
- `my_first_struct`: Print the contents of an integer array struct
- `my_is_sort`: Check if an integer array is sorted (ascending or descending)

Each function is implemented manually without using the original C library equivalents.

---

## Installation
Compile the project using `gcc`.

Example:
```bash
gcc -Wall -Wextra -Werror *.c -o my_project

Or compile each exercise separately:

gcc ex00/reverse_string.c -o reverse_string
gcc ex01/my_strcmp.c -o my_strcmp


## Usage

Example for testing functions:

./my_project "Hello"

Or for specific exercises:

./reverse_string "Hello"
./my_strcmp "abc" "abd"

For struct-based exercises, you can test using a main.c file.

## The Core Team

Made at Qwasar SV -- Software Engineering School

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo'