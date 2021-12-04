#include "main.h"
int our_exit(char **args)
{
    free_grid(args);
    exit(EXIT_SUCCESS);
}

int our_env(char **args)
{
    exit(EXIT_SUCCESS);
}