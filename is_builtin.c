#include "main.h"
int is_built_in(char **args)
{
    int (*func)(char **args);
    /*char *bi[] = {
        "exit",
        "env",
    };
    int (*builtin_func[])(char **args) = {
        &our_exit,
        &our_env,
    };*/
    int index = 0, sub = 0, funcion = 0;

    if (args[0] == NULL)
        return (1);
    for(; bi[index].name != NULL; index++)
    {
        sub = (_strcmp(args[0], bi[index].name));
        if (sub == 0)
        {
            func = bi[index].builtin_func;
            funcion = func(args);
            return (funcion);
        }
    }
    return (executable(args));
}
