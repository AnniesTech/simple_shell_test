#include "main.h"
char *concat_path(char *path, char **args)
{
    char **parsing = NULL, *concat_path = NULL;
    int len = 0;
    unsigned int pos1 = 0, pos2 = 0;

    len = (_strlen(path) + _strlen(*args));
    printf("%d\n", len);
    parsing = token_2(path);
    while (parsing[pos1])
    {
        concat_path = (_strcat(parsing[pos1], args[0]));
        pos1++;
    }
    return (concat_path);
}