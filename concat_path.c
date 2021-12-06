#include "main.h"
char *concat_path(char *path, char **args)
{
    char **parsing = NULL, *concat_path = NULL;
    struct stat st;
    unsigned int pos = 0;

    parsing = token_2(path);
    while (parsing[pos])
    {
        concat_path = (_strcat(parsing[pos], args[0]));
        if (stat(concat_path, &st) == 0)
            printf("%s: Found.\n", concat_path);
        else
            printf("%s: Not found.\n", concat_path);
    }
    return (concat_path);
}