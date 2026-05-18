# Welcome to My Mastermind
***

## Task
The goal of this project is to recreate the classic Mastermind game in C.

The program generates a secret 4-digit code using numbers from 0 to 8 with no duplicates, and the player must guess it within a limited number of attempts.

After each guess, the program provides feedback:

how many digits are well placed (correct digit in correct position)
how many digits are misplaced (correct digit but wrong position)

The challenge is to correctly implement:

command-line argument parsing
input handling using read()
input validation rules
random unique code generation
comparison logic without double counting



## Description
This project was implemented in C using low-level system calls.

Main features:

Secret code generation using rand() and srand(time(NULL))
Optional arguments:
-c to set a custom secret code
-t to set number of attempts (default is 10)
Safe input handling using read() instead of scanf or fgets
Validation rules:
input must be exactly 4 characters
only digits from 0 to 8 are allowed
no duplicate digits
Comparison system:
counts well placed digits
counts misplaced digits without double counting
Game loop that continues until:
the player wins, or
attempts run out



## Installation
Compile the project using:
make

Clean object files:
make clean

Full clean (including executable):
make fclean

Rebuild project:
make re


## Usage
Run the program without arguments:

./my_mastermind

Run with custom secret and attempts:

./my_mastermind -c 1234 -t 5
Example gameplay:
Will you find the secret code?
Please enter a valid guess
Round 0
> 1023
Well placed pieces: 1
Misplaced pieces: 2

### The Core Team
This project was implemented as a solo software engineering exercise focusing on low-level C programming concepts such as memory handling, input parsing, and algorithmic logic.

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
