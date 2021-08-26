% Shell
% Juan Camilo, Pablo Garcia
% August 2021


#NAME

	--Simple Shell - Command interpreter.


#SYNOPSIS
	--[command_string | file]
	- #include "shell.h"


#SINTAXIS

	--int main (int argc, char *argv[]);

#DESCRIPTION

	--Simple shell is a compatible command language interpreter that executes commands read
	from the standard input or from a file, being a system of services for a human user
	or other program.


#OPTIONS

--Builtin:

- exit: It terminaters the calling process inmmediately.

- env: It show the enviroment.

--No Builtin:

- cat [filename]:  Display file’s contents to the standard output device (usually your monitor).

- chmod [options]: mode filename: Change a file’s permissions.

- chown [options] filename: Change who owns a file.

- clear 	Clear a command line screen/window for a fresh start.

- cp [options] source destination: Copy files and directories.

- date [options]: Display or set the system date and time.

- df [options]: Display used and available disk space.

- du [options]: Show how much space each file takes up.

- echo: used to display line of text/string that are passed as an argument.

- file [options] filename: Determine what type of data is within a file.

- find [pathname] [expression]: Search for files matching a provided pattern.

- grep [options] pattern [filesname]: Search files or output for a particular pattern.

- less [options] [filename]: View the contents of a file one page at a time.

- ln [options] source [destination]: Create a shortcut.

- locate filename: Search a copy of your filesystem for the specified filename.

- lpr [options]: Send a print job.

- ls [options]: List directory contents.

- man [command]: Display the help information for the specified command.

- mkdir [options] directory: Create a new directory.

- mv [options] source destination: Rename or move file(s) or directories.

- passwd [name [password]]: Change the password or allow (for the system administrator) to change any password.

- ps [options]: Display a snapshot of the currently running processes.

- pwd: Display the pathname for the current directory.

- rm [options] directory: Remove (delete) file(s) and/or directories.

- rmdir [options] directory: Delete empty directories.

- ssh [options] user@machine: Remotely log in to another Linux machine, over the network. Leave an ssh session by typing exit.

- su [options] [user [arguments]]: Switch to another user account.

- tail [options] [filename]: Display the last n lines of a file (the default is 10).

- tar [options] filename: Store and extract files from a tarfile (.tar) or tarball (.tar.gz or .tgz). top Displays the resources being used on your system. Press q to exit. touch filename Create an empty file with the specified name.

- who [options]: Display who is logged on.


#EXAMPLES



--ls:

     _exit.c      _strdup.c    a           get_line.c         prompt.c           stat_command.c

     AUTHORS              _putchar.c   _strlen.c    environ.c   man_of_shell.md    selectfunction.c  strcat.c

     README.md            _strcmp.c    _strncat.c   error.c     man_of_shell.md~   shell.h           strtok.c

--ls -la:

total 100
-rw-r--r-- 1 pablitossorix pablitossorix  3191 Aug 26 10:32 '#man_of_shell.md#'

drwxr-xr-x 1 pablitossorix pablitossorix   512 Aug 26 10:30  .

lrwxrwxrwx 1 pablitossorix pablitossorix    25 Aug 26 09:57  .#man_of_shell.md -> pablitossorix@OSORIO.2311

drwxr-xr-x 1 pablitossorix pablitossorix   512 Aug 25 10:44  ..

-rw------- 1 pablitossorix pablitossorix   439 Aug 25 11:20  .gdb_history

drwxr-xr-x 1 pablitossorix pablitossorix   512 Aug 26 10:29  .git

-rw-r--r-- 1 pablitossorix pablitossorix   187 Aug 25 10:44  AUTHORS

-rw-r--r-- 1 pablitossorix pablitossorix    26 Aug 25 10:44  README.md

-rw-r--r-- 1 pablitossorix pablitossorix   361 Aug 25 23:32  _exit.c

-rw-r--r-- 1 pablitossorix pablitossorix   246 Aug 25 10:44  _putchar.c

-rwxr-xr-x 1 pablitossorix pablitossorix   408 Aug 25 10:44  _strcmp.c

-rwxr-xr-x 1 pablitossorix pablitossorix   482 Aug 25 10:44  _strdup.c

-rw-r--r-- 1 pablitossorix pablitossorix   185 Aug 25 10:44  _strlen.c

-rw-r--r-- 1 pablitossorix pablitossorix   351 Aug 25 10:44  _strncat.c

-rwxr-xr-x 1 pablitossorix pablitossorix 49192 Aug 26 10:30  a

-rwxr-xr-x 1 pablitossorix pablitossorix  1171 Aug 25 10:44  environ.c

-rwxr-xr-x 1 pablitossorix pablitossorix   898 Aug 25 10:44  error.c

-rw-r--r-- 1 pablitossorix pablitossorix   411 Aug 25 21:13  get_line.c

-rw-r--r-- 1 pablitossorix pablitossorix   199 Aug 25 14:36  man_of_shell.md

-rw-r--r-- 1 pablitossorix pablitossorix   200 Aug 25 14:26  man_of_shell.md~

-rw-r--r-- 1 pablitossorix pablitossorix  1027 Aug 26 10:23  prompt.c

-rw-r--r-- 1 pablitossorix pablitossorix   542 Aug 25 21:13  selectfunction.c

-rw-r--r-- 1 pablitossorix pablitossorix  1062 Aug 25 23:31  shell.h

-rw-r--r-- 1 pablitossorix pablitossorix  1020 Aug 26 10:29  stat_command.c

-rwxr-xr-x 1 pablitossorix pablitossorix   820 Aug 25 10:44  strcat.c

-rwxr-xr-x 1 pablitossorix pablitossorix   562 Aug 25 11:33  strtok.c


	   --echo:
		echo "hello".
		outuput: hello

		--pwd:

		/home/username/currentdirectory

#EXIT VALUES

      --An exit status of zero indicates success. A non-zero exit status indicates failure
      and if  a  command is not found, the child process created to execute it returns a status of 127.

#RETURN VALUE

	--When it return 0 the execution was perfectly done, if it return another number it had a error.

#BUGS

	--It can't handle pipes.
	--Semicolon is not handled.
	--It can´t change current directory.