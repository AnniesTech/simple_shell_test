#include "main.h"
char *concat_path(char *path, char **args)
{
    char **parsing = NULL, *command = NULL;
    int len = 0;
    struct stat st;

    parsing = token_1(path, ":");
    for (len = 0; parsing[len]; len++)
    {
        printf("%s\n", parsing[len]);
        command = malloc(sizeof(char) * (_strlen(parsing[len]) + _strlen(args[0]) + 2));
        if (command == NULL)
        {
            perror("Memory error in concat the path");
            return (NULL);
        }
        command = _strcpy(command, parsing[len]);
        command = _strcat(command, "/");
        command = _strcat(command, args[0]);
        /*command = _strcat(command, NULL);*/
        if (stat(command, &st) == 0)
        {
            /*command[len] = 0;*/
            printf("%s\n", command);
            return(command);
        }
        free(command);
    }
    return (NULL);
}