#include "main.h"
char *get_path(void)
{
    char **env = environ;
    char *path = NULL;
    int index = 0, sub = 0;

    while (env)
    {
        if (sub = (_strcmp(*env, "PATH")) == 0)
        {
            path = *env;
            path++;
            index++;
        }
    }
    return (path);

}