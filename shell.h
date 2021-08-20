#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int _putchar(char c);
int _strlen(char *s);
char *_strdup(char *str);
char **_strtok(char *line);
void prompt(void);
char *read_c(void);
char **tokenization(char *line);
void (*selectfunction(char **args))(char **args);
int _strcmp(char *s1, char *s2);
void exitf(char **args);
char **tokenize(char *string);
char *getvarfromenv(char *varname);



typedef struct buildin
{
	char *program;
	void (*f)(char **args);
} order;

#endif