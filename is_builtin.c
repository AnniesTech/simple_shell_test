#include "main.h"
int is_built_in(char **args)
{
    int (*func)(char **args) = NULL;
    int index = 0, pos = 0, sub = 0, funcion = 0;
    char *command = NULL, *path = NULL;

    if (args[0] == NULL)
    {
        return (1);
    }
    for (; bi[index].name != NULL; index++)
    {
        sub = (_strcmp(args[0], bi[index].name));
        if (sub == 0)
        {
            func = bi[index].builtin_func;
            funcion = func(args);
            return (funcion);
        }
    }
    while (args[pos])
    {
        if (*args[pos] == '/')
        {
            return (executable(args[0], args));
            break;
        }
        else
        {
            path = get_path(args);
            command = concat_path(path, args);
            return (executable(command, args));
        }
        pos++;
    }
    return (1);
}
