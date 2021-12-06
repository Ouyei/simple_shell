![image](img/simple_shell_header.png)
<h1>Simple Shell</h1>
Release date November 8, 2021

![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/Ouyei/simple_shell)
![Lines of code](https://img.shields.io/tokei/lines/github/Ouyei/simple_shell)


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

* Task 0. README, man, AUTHORS
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
total 22
-rwxrwxrwx 1 user user   206 Aug 23 21:11 AUTHORS
-rwxrwxrwx 1 user user   479 Aug 25 11:31 b_cd.c
-rwxrwxrwx 1 user user   190 Aug 25 11:31 b_exit.c
-rwxrwxrwx 1 user user   585 Aug 25 11:31 b_help.c
-rwxrwxrwx 1 user user  1131 Aug 25 11:35 hsh_execute.c
-rwxrwxrwx 1 user user   727 Aug 25 11:55 hsh_launch_child.c
-rwxrwxrwx 1 user user   426 Aug 25 11:49 hsh_read_line.c
-rwxrwxrwx 1 user user   711 Aug 25 12:17 hsh_shell.c
-rwxrwxrwx 1 user user  1301 Aug 25 12:04 hsh_tokenize.c
drwxrwxrwx 1 user user     0 Aug 23 21:11 img
-rwxrwxrwx 1 user user 11357 Aug 23 21:11 LICENSE
-rwxrwxrwx 1 user user  1091 Aug 23 21:11 man_1_simple_shell
-rwxrwxrwx 1 user user  6471 Aug 25 12:44 README.md
-rwxrwxrwx 1 user user   749 Aug 25 11:30 shell.h
drwxrwxrwx 1 user user  4096 Aug 24 20:03 simple_shell_03
-rwxrwxrwx 1 user user   183 Aug 25 11:30 s_putchar.c
-rwxrwxrwx 1 user user   339 Aug 25 10:04 s_puts.c
-rwxrwxrwx 1 user user 16784 Aug 25 10:56 s_strcat
-rwxrwxrwx 1 user user   628 Aug 25 10:57 s_strcat.c
-rwxrwxrwx 1 user user   325 Aug 25 10:02 s_strcmp.c
-rwxrwxrwx 1 user user   282 Aug 25 10:02 s_strlen.c
-rwxrwxrwx 1 user user   276 Aug 25 12:14 s_word_count.c
```
### Files

##|File|Description
---|---|---
|[AUTHORS](https://github.com/Ouyei/simple_shell/blob/master/AUTHORS)|Contributors in this repository|
|[man_1_simpleShell](https://github.com/Ouyei/simple_shell/blob/master/man_1_simple_shell )|Manual page our of Simple Shell|
|[README.md](https://github.com/Ouyei/simple_shell/blob/master/README.md)|Information about our repository|


## Flowchart

## Authors

<li> Andres Henderson - <a href="https://github.com/andresovichh">andresovichh</a></li>
<li> Oscar Bedat - <a href="https://github.com/Ouyei">Ouyei</a></li>
