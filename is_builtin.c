#include "main.h"
int is_built_in(char **args)
{
    int (*func)(char **args);
    int index = 0, pos = 0, sub = 0, funcion = 0;
    char **command = NULL, *path = NULL;

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
        else if (sub != 0)
        {
            while (args[pos])
            {
                if (*args[pos] == '/')
                {
                    return(executable(args));
                    break;
                }
                else
                {
                    printf("en el if del / \n");
                    path = get_path(args);
                    command = concat_path(path, args);
                    return(executable(command));
                }
                pos++;
            }
        }
    }
    return (1);
}
