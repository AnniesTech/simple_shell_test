#include "main.h"
int is_built_in(char **args)
{
    char *bi[] = {
        "exit",
        "env",
    };
    int (*builtin_func[])(char **args) = {
        &our_exit,
        &our_env,
    };
    int index = 0, sub = 0;

    for(; index < word_counter(*args); index++)
    {
        sub = (_strcmp(args[0], bi[index]));
        if (sub == 0)
        {
            return ((*builtin_func[index])(args));
        }
    }
    return (executable(args));
}
