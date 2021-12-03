#include "main.h"
char *get_path(void)
{
    char **env = environ;
    char *path = NULL;
    int index = 0;

    path = malloc(sizeof(char *) * word_counter(*env));
    if (path == NULL)
    {
        free(path);
    }

    while (env)
    {
        if ((_strcmp(*env, "PATH")) == 0)
        {
            
        }
    }
    printf("%s\n", path);
    return (path);
}