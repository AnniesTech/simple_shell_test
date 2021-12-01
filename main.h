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
/* Prototypes */
void prompt(void);
int word_counter(char *n);

#endif