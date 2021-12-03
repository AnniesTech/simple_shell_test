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
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int grid_size(char **grid);
void free_grid(char **grid);
extern char **environ;
/* Prototypes */
void prompt(void);
char *read_line(void);
char **token_1(char *str);
int executable(char **args);
int word_counter(char *n);
int our_exit(char **args);
int our_env(char **args);
int is_built_in(char **args);
char *get_path(void);

/* Structures */
/*typedef struct is_built_in {
    char *built_name;
    char *real_name;
} built_in;*/

typedef struct built_in_func {
    char *name;
    int (*builtin_func)(char **args);
} built_in_func;

static const built_in_func bi[] = {
    {"exit", our_exit},
    {"env", our_env},
    {NULL, NULL},
};

#endif
