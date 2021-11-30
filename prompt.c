#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int _strlen(char *c)
{
    int count = 0;

    while (c[count])
    {
        count++;
    }
    return (count);
}
int main(int argc, char *argv[], char *env[])
{
    char *string = "$ ", *str = NULL, *p;
    char cmd[] = {"/bin"};
    size_t caracteres = 0, len = 0;
    pid_t pid;
    int status;

    /* prompt */
    while (1)
    {
        write(STDOUT_FILENO, string, _strlen(string));
    /* Read the line */
        if (getline(&str, &len, stdin) == -1)
        {
            if (feof(stdin))
            {
                exit(EXIT_SUCCESS);
            }
            else
            {
                perror("Error");
                exit(EXIT_FAILURE);
            }
        }
    /* Tokenizar */
        p = strtok(str, " ");

            while (p)
            {
                printf("%s\n", p);
                p = strtok(NULL, " ");
            }
        pid = fork();
        if (pid == -1)
        {
            printf("Error");
            return (1);
        }
        if (pid == 0)
        {	
            if (execve(cmd, argv, env) == -1)
            {
                perror("No such file or directory");
            }
        }
        else
        {
            wait(&status);
        }
    }
    return (0);
}
