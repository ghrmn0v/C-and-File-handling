# Welcome to Quest05
***

## Task
The goal of this project is to practice advanced shell commands and file manipulation in Linux.
The challenge is learning how to use commands like find, wc, basename, patch, pipes (|), and wildcard patterns (*) efficiently.

The exercises focus on:

Counting files and directories
Searching and deleting specific files
Extracting filenames without extensions
Applying patches using the patch command



## Description
ex00 — my_count_files

Counts all regular files and directories in the current directory and its subdirectories, including ..

Main commands used:

find
wc
ex01 — my_clean

Searches for:

files ending with ~
files starting and ending with #

Then prints and deletes them using a single command.

Main commands used:

find
-exec
rm
ex02 — my_find_sh

Finds all .sh files recursively and displays only the filename without the .sh extension.

Main commands used:

find
basename
sed
ex03 — my_patch

Applies a patch file generated with diff to transform file a into the corrected version.

Main commands used:

diff
patch




## Installation
No installation is required.

Make sure you have a Unix/Linux shell environment with standard utilities installed:


## Usage
Run my_count_files
./my_count_files

Run my_clean
./my_clean

Run my_find_sh
./my_find_sh

Apply patch
patch a < sw.diff

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
