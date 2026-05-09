# Welcome to Quest02
***

## Task
The goal of this quest is to understand and practice pointers, basic string manipulation, and arithmetic operations in C.

The challenge is to:

Work directly with memory using pointers
Modify variables through their addresses
Recreate basic standard library functions like strlen
Manipulate strings (uppercase, lowercase, search)
Build simple reusable utility functions

This quest introduces low-level thinking, which is essential in C programming.

## Description
I solved this project by implementing each function step by step, focusing on how pointers work and how data is stored in memory.

Key concepts used:

Pointers (*) to access and modify values via memory addresses
Dereferencing (*param) to change the actual variable value
Loops (while) to iterate through strings
ASCII values to convert characters (uppercase ↔ lowercase)
Basic arithmetic operations

Examples of implementations:

my_initializer sets a value to 0 using a pointer
my_swap swaps two integers using a temporary variable
my_strlen counts characters until \0
my_putstr prints characters one by one
my_upcase / my_downcase convert letter cases using ASCII logic

## Installation
To compile the project, use gcc:

gcc -Wall -Wextra -Werror *.c -o quest02

Or if a Makefile is required:

make

## Usage
Run the compiled program:

./quest02

You can also test functions individually by writing your own main.c, for example:

#include <stdio.h>

int main() {
    char str[] = "AbcE Fgef1";

    printf("Original  -> %s\n", str);
    printf("Downcase  -> %s\n", my_downcase(str));
    printf("Upcase    -> %s\n", my_upcase(str));

    return 0;
}
### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
