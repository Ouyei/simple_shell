![image](img/simple_shell_header.png)
<h1>Simple Shell</h1>
Release date December 8, 2021

![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/Ouyei/simple_shell)
![Lines of code](https://img.shields.io/tokei/lines/github/Ouyei/simple_shell)
![Commit activity](https://img.shields.io/github/commit-activity/y/Ouyei/simple_shell)
![Contributors](https://img.shields.io/github/contributors/Ouyei/simple_shell)
![Documentation](https://img.shields.io/badge/documentation-yes-brightgreen)

## Table of Contents
* [Introduction](#Introduction)
  * What is Shell
  * What is it for
* [Project Information](#Project-Information)
    * Tasks
    * Enviroment
    * General requirements
    * Allowed functions
* [Documentation](#Documentation)
    * Instalation
    * Testing
    * Files
    * Flowchart
* [Extra Information](#Extra-Information)
    * Resources
* [Authors](#Authors)

## Introduction

### What is Shell
A **shell** is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type **`sh`** ([Bourne Shell](https://en.wikipedia.org/wiki/Bourne_shell)) will be developed. Users typically interact with a shell using a [terminal emulator](https://en.wikipedia.org/wiki/Terminal_emulator) that is used for entering data into and displaying or printing data from, a computer or a computing system.

### What is it for
This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at **`/bin/sh`**.

## Project Information

### Tasks

* Task 0. README, man_1_simple_shell, AUTHORS
* Task 1. Betty would be proud
* Task 2. Simple shell 0.1
* Task 3. Simple shell 0.2
* Task 4. Simple shell 0.3
* Task 5. Simple shell 0.4
* Task 6. Simple shell 1.0
* Task 7. What happens when you type ls -l in the shell

### Enviroment

<!-- ubuntu -->
<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a> OS: Ubuntu 20.04 LTS
<!-- bash -->
<a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- c -->	
<a href="https://www.cprogramming.com/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=C%20Language&color=5C6BC0&logo=c&logoColor=A8B9CC&labelColor=2F333A" alt="C Low level programming language"></a> Language: C
Compiler: gcc 9.3.0
<!-- vim -->
<a href="https://www.vim.org/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Vim&color=019733&logo=Vim&logoColor=019733&labelColor=2F333A" alt="Suite CRM"></a> Editor: VIM 8.1.2269
<!-- git -->
<a href="https://git-scm.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Git&color=F05032&logo=Git&logoColor=F05032&labelColor=2F333A" alt="git distributed version control system"></a> Control version: Git
<!-- github -->
<a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>

Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### General requirements
 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on `Ubuntu 14.04 LTS`
 * Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * No more than 5 functions per file
 * All your header files should be include guarded
 * This shell should not have any memory leaks
 * Unless specified otherwise, your program must have the exact same output as `sh` (`/bin/sh`) as well as the exact same error output.

### Allowed functions used 

* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getline` (man 3 getline)
* `isatty` (man 3 isatty)
* `malloc` (man 3 malloc)
* `perror`(man 3 perror)
* `signal` (man 2 signal)
* `stat` (__ xstat) (man 2 stat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `write` (man 2 write)

## Documentation

### Installation

- Clone this repository: `git clone "https://github.com/Ouyei/simple_shell"`
- Change directories into the repository: `cd simple_shell`
- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- Run the shell in interactive mode: `./hsh`
- Or run the shell in non-interactive mode: example `echo "Hello world!" | ./hsh`

### Testing

First compile and then run the executable file on your terminal
For compile see [Installation](#installation) section

```
!!!!!!!!!!!!!!!!!MODIFICAR ESTO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
$ ./hsh
$
$ ls -l
total 56
-rw-r--r-- 1 root root  238 Dec  6 08:34 AUTHORS
-rwxr-xr-x 1 root root  393 Dec  6 08:39 generate-authors.sh
-rw-r--r-- 1 root root 2263 Dec  6 08:39 hsh_execute.c
-rw-r--r-- 1 root root  263 Dec  6 08:39 hsh_getenv.c
-rw-r--r-- 1 root root  341 Dec  6 08:39 hsh_getline_command.c
-rw-r--r-- 1 root root  580 Dec  6 08:39 hsh_get_path.c
-rw-r--r-- 1 root root 1160 Dec  6 08:39 hsh_shell.c
-rw-r--r-- 1 root root 1475 Dec  6 08:39 hsh_string_foos.c
-rw-r--r-- 1 root root  695 Dec  6 08:39 hsh_tokenizer.c
-rw-r--r-- 1 root root 1066 Dec  6 08:39 hsh_values_path.c
drwxr-xr-x 2 root root   37 Dec  6 08:34 img
-rw-r--r-- 1 root root 1461 Dec  6 08:34 man_1_simple_shell
-rw-r--r-- 1 root root 7134 Dec  6 08:34 README.md
-rw-r--r-- 1 root root  824 Dec  6 08:39 shell.h
```
### Files

File|Description
---|---|---
|[AUTHORS](https://github.com/Ouyei/simple_shell/blob/master/AUTHORS)|Contributors in this repository|
|[README.md](https://github.com/Ouyei/simple_shell/blob/master/README.md)|Information about our repository|
|[hsh_execute](https://github.com/Ouyei/simple_shell/blob/master/hsh_execute.c )|Execute builtins and commands|
|[hsh_get_path.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_get_path.c)|Get variable PATH|
|[hsh_getenv.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_getenv.c)|Prints enviroment to stndard output|
|[hsh_getline_command.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_getline_command.c)|Gets input|
|[hsh_shell.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_shell.c)|Main arguments functions||[hsh_string_foos.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_string_foos.c)|Function to work and modifie string|
|[hsh_tokenizer.c](https://github.com/Ouyei/simple_shell/blob/master/hsh_tokenizer.c)|Tokenizes a stirng|
|[man_1_simple_shell](https://github.com/Ouyei/simple_shell/blob/master/man_1_simple_shell)|Manual page our of Simple Shell|
|[shell.h](https://github.com/Ouyei/simple_shell/blob/master/shell.h)|Prototypes functions and headers|

## Flowchart

## Authors

<li> Andres Henderson - <a href="https://github.com/andresovichh">andresovichh</a></li>
<li> Oscar Bedat - <a href="https://github.com/Ouyei">Ouyei</a></li>
