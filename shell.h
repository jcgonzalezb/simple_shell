#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *s);
char **_strtok(char *line);
void prompt(void);
char *read_c(void);
char **tokenization(char *line);


#endif