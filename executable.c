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
			perror("Couldn't execute the program");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
		printf("Waiting for child");
	}
	return (1);
}
