Simple shell
This is a simple UNIX command language interpreter.

Compilation
All files in this repository should be compiled in the following way:

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
Project requirements.
Allowed editors: vi, vim, emacs.
All files will be compiled on Ubuntu 14.04 LTS.
Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
All your files should end with a new line.
A README.md file, at the root of the folder of the project is mandatory.
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
Your shell should not have any memory leaks.
No more than 5 functions per file.
All your header files should be include guarded.
Use system calls only when you need to.
Usage
Once executed, the compiled file will bring up a prompt that executes built-in commands with arguments.

./hsh
($) ls -l
Exit
For the shell purposes, a command which exits with a zero exit status has succeeded. A non-zero exit status indicates failure.
When a command terminates on a fatal signal N, bash uses the value of 128+N as the exit status.
If a command is not found, the child process created to execute it returns a status of 127.
If a command is found but is not executable, the return status is 126.
If a command fails because of an error during expansion or redirection, the exit status is greater than zero.
shell builtin commands return a status of 0 (true) if successful, and non-zero (false) if an error occurs while they execute. All builtins return an exit status of 2 to indicate incorrect usage.
#Interactive and non interactive

If it is invoked with standard input not connected to a terminal, it reads and executes received commands in order.
Example:

($) echo "hello!" | ./hsh
hello!
($)
If it is invoked with standard input connected to a terminal (using [isatty]), an interactive shell is opened. When executing interactively, shell displays the prompt ($) when it is ready to read a command.
Example:

($)./hsh
($)
Environment:
shell receives and copies the environment of the parent process in which it was executed. This environment is an array of name-value strings describing variables in the format NAME=VALUE.

Command Execution:
When shell receives a command, this is tokenized into smaller words using a space as a delimiter. The first word works as the command and all remaining strings are considered arguments to that command; shell then procceds with the following steps:

If the first character of the command is neither a backslash nor a period, the shell searches for it in the list of shell builtins. If a builtin with that name exists, the builtin is invoked.
If the first character of the command is neither a backslash nor a period builtin, shell searches each element of the PATH environmental variable for a directory containing an executable file by that name.
When the first character of the command is a backslash or a period, the shell executes the program with any remaining given arguments in a separate execution environment.
Features
built-in command env

execute commands with arguments

execute files

Files
Every file contains functions used to work with the main file: shell.c.

holberton.h: header file.

shell.c:

main - entry point to the she.
built_ins.c:

_strlen - to get the length of a string.
to_exit - to exit the program.
_printenv - to print the current environment.
built_ins - to check for built-ins.
env_iron.c:

_strcpy - to copy a string contained in a variable into another variable.
envi_ron - to get the value of the environment variable.
_strdup - to duplicate a string.
_strncmp - to compare two strings with a certain number of bytes.
_strcmp - to compare two strings.
get_path.c:

get_path - to search a command in the path and concatenate
str_concat -
_strncat - to concatenate strings.
init_execution.c:

init_execution - to fork and initialize the execution of a new process.
print_prompt.c:

print_prompt - to print the prompt
get_input.c:

to get new line.
get_tokenization.c:

_tokenize - allocates tokens and tokenize the string given as imput.
free_func.c:

free_func: a function to free all argument allocations.
Bugs
Not known yet

Authors
This program was written by:

Pedro Arbilla

Sebastian Olmos