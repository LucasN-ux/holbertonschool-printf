# [_printf() - Custom implantation of the standard printf(3)]

## About

_printf() is a custom implantation of the standard printf(3). It handles formatted conversion and writes characters to the standard output using write(2).
This priject is a part of a low-level programming curriculum of the Holberton School.

## Table of contents

-  [About](#about)
-  [Prerequisites](#prerequisites)
-  [Facility](#facility)
-  [Use](#use)
-  [Project Structure](#project-structure)
-  [Built with](#built-with)
-  [Documentation](#documentation)

## Prerequisites

To compile and use this project you'll need : 
- a Unix system
- a C compiler (example gcc)
- basic Shell tools.

## Facility

Clone this repository:
https://github.com/LucasN-ux/holbertonschool-printf.git

Compile the files:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Use

Include the header and call _printf as you would use the standard printf.
Then, run the program.

## Project Structure


    |-- main.h
    |-- _printf.c
    |-- print_char.c
    |-- print_string.c
    |-- print_int.c
    |-- print_percent.c
    |-- man_3_printf.c


## Built with

### Languages and tools

_printf() uses language C. It includes the standard library: 
- <stdarg.h>
- <unistd.h>
It also includes the custom library:
- "main.h"

## Documentation

### Library documentation

#### STDARG
http://manpagesfr.free.fr/man/man3/stdarg.3.html

#### UNISTD
https://man7.org/linux/man-pages/man0/unistd.h.0p.html

### Flowchart
This is the _printf() flowchart:
<img width="1974" height="4050" alt="image" src="https://github.com/user-attachments/assets/39b9e62f-018a-4649-a591-9fe7703a120e" />



