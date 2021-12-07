#include "main.h"
char **concat_path(char *path, char **args)
{
    char **parsing = NULL, **command = NULL;
    int len = 0;
    unsigned int pos1 = 0, pos2 = 0;

    printf("En la función");
    len = (_strlen(path) + _strlen(*args));
    command = malloc(sizeof(char *) * len);
    if(command == NULL)
    {
        perror("Memory error in concat the path");
        return(NULL);
    }
    parsing = token_2(path);
    while (*parsing)
    {
        _strcat(*command, *parsing);
        pos1++;
    }
    command[pos1] = "/";
    while (*args)
    {
        _strcat(*command, *args);
        pos1++;
    }
    command[pos1] = '\0';
    return (command);
}