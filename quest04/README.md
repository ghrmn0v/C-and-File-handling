# Welcome to Quest04
***

## Task
This project contains a set of C programming exercises focused on memory allocation, strings, arrays, and basic algorithmic logic. Each exercise implements a standalone function similar to standard C library behaviors or simple simulations.

The main challenge is to correctly manage dynamic memory allocation (`malloc`), handle edge cases, and manipulate arrays and strings without using restricted standard library functions.

---
## Description
This project is divided into 6 exercises:

### ex00 - my_range
Create a function that returns an array of integers from `min` (included) to `max` (excluded).  
If `min >= max`, return `NULL`.

### ex01 - my_strdup
Reproduce the behavior of `strdup` by duplicating a string into newly allocated memory.

### ex02 - my_print_words_array
Display each string in an array on a new line using a custom print function (no `printf`).

### ex03 - my_count_on_it
Return an array containing the length of each string in a given string array.

### ex04 - my_join
Join all strings in an array into a single string using a given separator.

### ex05 - my_spaceship
Simulate a spaceship movement based on instructions:
- `R` = turn right  
- `L` = turn left  
- `A` = advance  

Return final coordinates and direction in the format:
`"{x: X, y: Y, direction: 'DIRECTION'}"`

---
## Installation
Compile each exercise using `gcc`.

Example:
gcc -Wall -Wextra -Werror my_range.c -o my_range
Or compile all files together for testing:

make

(To clean compiled files if a Makefile is provided:)

make clean

## Usage
Run each compiled program with appropriate test cases depending on your main function.

Example:

./my_range 1 4
./my_strdup "Hello"
./my_spaceship "RAALALL"

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
