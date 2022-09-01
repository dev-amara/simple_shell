# Project 0x16 - simple_shell
## simple_shell
* This is a collaborative project made by Sangwani P. Zyambo and Brendah Uwitonze, Students of software engineering at ALX/Holberton school. This repo contains files for the **simple_shell project**. The project requires us to develop our own UNIX command interpreter (shell).

## File structure

These are the files with custom system calls and functions with a brief description.

|  ***file***  | ***Description***     |
|-------------|------------------------|
| ['shell.h'](./shell.h) | Header file with prototypes |
| ['shell.c'](./shell.c) | Main File to execute |
| ['README.md'](./README.md) | Readme.md file |
| ['man_1_simple_shell'](./man_1_simple_shell) | The manual Page |
| ['str_helpers.c'](./str_helpers.c) | File containing functions to help with string manipulation |
| ['path_helpers.c'](./path_helpers.c) | File containing functions to help with PATH handling |
| ['built-ins.c'](./built-ins.c) | File containing buitins |
| ['helpers.c'](./helpers.c) | File containing helper functions such as exec_cmd |



## Requirements
This simple_shell project is designed to run on the Ubuntu 20.04 LTS using gcc, and can be compiled using the options -wall - werror -wextra -pedantic -std=gnu89
The code should use the [Betty style](https://github.com/holbertonschool/Betty).

## Features
* Display a prompt and wait for the user to type a command.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors
* Hand the EOF(Ctrl + D) condition.
* Handle the Ctrl +C to not terminate the shell.
* Handle th command line with arguments.
* Handle the PATH.
* Support the exit features.

## Builtins
* exit 'terminates the shell'
* env 'display the environment'

## Authors
* **Amara Bamba** - [dev-amara](https://github.com/dev-amara)

