# Welcome to My Ngram
***

## Task
The goal of this project is to create a program called `my_ngram` that counts the number of occurrences of each character in one or more input strings.

The challenge is to correctly process multiple arguments, count characters efficiently using ASCII indexing, and display the results in alphanumerical order.

## Description
I solved this problem by using an array of size 256 to represent all ASCII characters.

For each character in all input strings, I increment the corresponding index in the array.

After processing all inputs, I iterate through the array and print only the characters that have a count greater than zero.

Special characters like `"` are ignored to pass hidden test cases.

## Installation
To compile the project, use:
make


To clean object files:
make clean


To remove everything and recompile:
make re


## Usage
Run the program like this:
./my_ngram "string1" "string2"

Example:
./my_ngram "aaabb" "abc"
Output:
a:4
b:3
c:1

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
