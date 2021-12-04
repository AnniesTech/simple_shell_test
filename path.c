#include "main.h"
char *get_path(void)
{
    char **env = environ;
    char *path = NULL;
    int index = 0;

    while (*env)
    {
        if ((strncmp(*env, "PATH", 4)) == 0)
        {
            path = *env;
            env++;
        }
        else
        {
            path = malloc(sizeof(char *) * (_strlen(*env) + 1));
            if (path == NULL)
            {
                free(path);
                return (NULL);
            }
        }
    }
    return (path);
}