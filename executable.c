#include "main.h"

/**
 * executable - Executes the child process
 * @args: arguments
 * Return: the result
 */

int executable(char **args)
{
	pid_t pid;
	int status = 0;

	pid = fork();
	if (pid == -1)
	{
		perror("No such file or directory\n");
	}
	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./hsh");
			// free_grid(args);
			/* free(args[0]); */
			printf("Me wa salir\n");
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}
	return (1);
}
