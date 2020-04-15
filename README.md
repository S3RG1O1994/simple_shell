A simple UNIX command interpreter that provides a user interface to access and give orders to the operating system.

[![N|Solid](https://lh3.googleusercontent.com/proxy/2HXz0jssqnR8UlxW-L4WhobBnk6O5QIBTWoUo0sv31Fbfb1pQBGFdzjZeH4UC2OCy-109f4onDje0o4eKvmSPPUYL2RQ8CSkAkJEMXcbutDOWFb-FZOdlbJZwckfRr0Eqrh2hEhSZwgnCPvzAkSoJRAj50s)](https://github.com/S3RG1O1994/simple-shell)

## Table of contents
* [Requirements](#requirements)
* [Instalation](#instalation)
* [Compilation](#compilation)
* [Written in](#written-in)
* [Example of use](#example-of-use)
* [Files and functions](#files-and-functions)
* [Authors](#authors)
## Requirements
* Ubuntu 14.04 LTS
* gcc version 4.8.4
## Instalation
*  Clone this repository:
```sh
git clone https://github.com/S3RG1O1994/simple_shell.git
```
* Inside the repository, compile.
* Execute:
```sh
./hsh
```
* Or run in non-interactive mode, in this mode:
```sh
echo "ls" | ./hsh
```
## Compilation
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Written in
* GNU Emacs 24.3.1
* C language
## Example of use
* Run an executable:
```sh
$ /bin/pwd
```
* Run an executable founded in the $PATH environment variable:
```sh
$ pwd
```
All commands and builtins that you can use are in the manual page.
## Files and functions
* [main.c](main.c) - File where all the main functions are called

### Authors
 - [Sergio Esteban Diaz](https://github.com/S3RG1O1994)
 - [Zoltan Mora](https://github.com/ZoltanMG)

© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
