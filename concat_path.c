#include "main.h"
char *concat_path(char *path, char **args)
{
    char **parsing = NULL, *command = NULL;
    int len = 0;
    unsigned int pos1 = 0, pos2 = 0;

    len = (_strlen(path) + _strlen(args));
    command = malloc(sizeof(char *) * len);
    if(command == NULL)
    {
        perror("Memory error in concat the path");
        return(NULL);
    }
    parsing = token_2(path);
    command = _strcat(*parsing, "/");
    command = _strcat(*parsing, args);
    while(command[pos1])
    {
    printf("%s\n", command);
    pos1++;
    }
    return (command);
}