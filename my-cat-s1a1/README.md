# Welcome to My Cat S1a1
***

## Task
The goal of this project is to recreate a simplified version of the Unix `cat` command.

The program must read one or multiple files given as command-line arguments and display their contents in the terminal.

The main challenge is to work with low-level system calls instead of standard library file handling functions.

We are not allowed to use functions like `fopen`, `fgets`, or `fprintf`. Instead, we must use `open`, `read`, `write`, and `close`.

---
## Description
This program mimics the behavior of the `cat` command by:

- Taking file names as command-line arguments
- Opening each file using `open()`
- Reading file contents using `read()`
- Printing content to standard output using `write()`
- Closing files using `close()`

If a file cannot be opened, it is simply skipped.

The program reads data in chunks (not line by line), which makes it closer to how the real `cat` command works internally.

## Installation
To compile the program, use `gcc`:

bash
gcc -Wall -Wextra -Werror my_cat.c -o my_cat

No additional dependencies are required.

## Usage
Run the program by passing one or more file names:

./my_cat file1 file2
Example:
./my_cat hello.txt world.txt

Output:

(contents of hello.txt)
(contents of world.txt)
### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
