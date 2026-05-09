# Welcome to My Square
***

## Task
The problem is to create a program that prints a square using specific characters based on given width and height.

The challenge is:

Handling different input sizes correctly
Managing edge cases like 1x1, 1xN, and Nx1
Matching the exact output format required by the program (no extra spaces or characters)
Reading input from command-line arguments instead of hardcoding values

## Description
I solved the problem by using nested loops to iterate through rows and columns.

For each position in the square:

Corners are printed as o
Top and bottom borders are printed as -
Left and right borders are printed as |
Inner spaces are filled with a space character " "

I also handled edge cases where the width or height is 1.
The program reads input using atoi(av[1]) and atoi(av[2]), ensuring compatibility with the required execution format.

## Installation
Compile the program using:

gcc my_square.c -o my_square
## Usage
Run the program with two arguments:

./my_square width height
Example
./my_square 5 3

Output:

o---o
|   |
o---o

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
