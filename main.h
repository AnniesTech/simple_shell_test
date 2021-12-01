#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

/* Auxiliares */
int _strlen(char *n);
char *_strdup(char *str);
int grid_size(char **grid);
void free_grid(char **grid, int height);
/* Prototypes */
char **prompt(void);
char **token_1(char *str);
int executable(char **args);
int word_counter(char *n);

#endif