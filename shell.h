#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
extern char **environ;
int _putchar(char c);
int _strlen(char *s);
char **_strtok(char *line);
void prompt(void);
char *read_c(void);
char **tokenization(char *line);
void (*selectfunction(char **args))(char **args);
int _strcmp(char *s1, char *s2);
void exitf(char **args);
char *getvarfromenv(char *varname);
char **tokenizepath(char *string);
char *_strncat(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
int stat_command(char **args, char **dividedPath);
void _perror(char *shell_name, char *command_name);
char *str_concat(char *s1, char *s2);

#define SHELL_NAME hsh

/**
 * struct buildin - Structure for selecting type of function.
 * @program: Built-in function.
 * @f: Calls the built-in function.
 */
typedef struct buildin
{
	char *program;
	void (*f)(char **args);
} order;

#endif
