#include "main.h"
int check_path(char **args)
{
    int index = 0;

    while(args[index])
    {
        if (args[index] == "/")
        {
            return(executable(args));
        }
        else
        {
            concat_path((get_path(args)), args);
        }
    }
}