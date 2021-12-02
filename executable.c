#include "main.h"

/**
 * executable - Executes the child process
 * @args: arguments
 * Return: the result
 */

int executable(char **args)
{
	pid_t pid;
	int status;

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
			exit(EXIT_FAILURE);
		}
		else
		{
			exit(EXIT_SUCCESS);
		}
	}
	else
	{
		wait(&status);
	}
	return (1);
}
