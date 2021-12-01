#include "main.h"
int executable(char **args)
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == -1)
    {
        perror("No such file or directory\n");
        exit(EXIT_FAILURE);
    }
    if (pid == 0)
    {
        if (execve(args[0], args, NULL) == -1)
        {
            perror("Error");
        }
    }
    else
    {
        wait(&status);
        printf("Waiting for child");
    }
    return (1);
}