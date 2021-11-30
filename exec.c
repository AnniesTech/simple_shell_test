#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main(void)
{
    int i = 0, status;
    pid_t pid;
    char cmd[] = {"/bin/ls"};
    char *av[] = {"ls", "-l", NULL};
    char *env[] = {"/tmp", NULL};

    while (i < 5)
    {
        pid = fork();
        if (pid == -1)
        {
            perror("This is an error\n");
        }
        if (pid == 0)
        {
            if (execve(cmd, av, env) == -1)
            perror("Could not execute execve");
        }
        else if (pid != 0)
        {
            wait(&status);	
        }
        i++;
    }
    return (0);
}
