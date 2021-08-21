#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

int _putchar(char c);
int _strlen(char *s);
char **_strtok(char *line);
char *str_concat(char *s1, char *s2);
void prompt(void);
char *read_c(void);
char **tokenization(char *line);
void (*selectfunction(char **args))(char **args);
int _strcmp(char *s1, char *s2);
void exitf(char **args);
char **tokenize(char *string);
char *getvarfromenv(char *varname);
char *_strdup(char *str);
char **check(char **args, char **dividedPath);
char ** nobuiltin();
void **match(char **args, char **dividedPath);

typedef struct buildin
{
	char *program;
	void (*f)(char **args);
} order;

#endif