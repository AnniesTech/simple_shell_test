#include "main.h"

/**
 * get_path - Function to get the path.
 * @args: tha arguments.
 * Return: null.
 */

char *get_path(char **args)
{
    char **env = NULL, **parsing = NULL;
    char *find_path = NULL, *concat_path = NULL;

    env = environ;
    while (*env)
    {
        if ((_strncmp(*env, "PATH", 4)) == 0)
        {
            find_path = malloc(sizeof(char *) * (_strlen(*env) + 1));
            if (find_path == NULL)
            {
                perror("Memory error in path");
                return (NULL);
            }
            _strcpy(find_path, *env);
            return(real_path(find_path));
        }
        env++;
    }
    return (NULL);
}

/*
int main(int argc, char *argv[])
{
    unsigned int index;
    struct stat st;

    if (argc < 2)
    {
        printf("Need more arguments\n");
        return (1);
    }
    for (index = 1; argv[index] != NULL; index++)
    {
        if (stat(argv[index], &st) == 0)
            printf("%s: Found.\n", argv[index]);
        else
            printf("%s: Not found.\n", argv[index]);
    }
    return (0);
*/